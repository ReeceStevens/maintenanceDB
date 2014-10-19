import xlrd
import csv
import sys
import magic
import re

##################################################
# Creates the program's version of the inventory #
# spreadsheet. Initializes last and next         #
# PM date field.                                 #
##################################################
def readInput(inputfile):
    xlsx_match = re.compile(".*Excel.*"); 
    xls_match = re.compile("Composite Document.*");
    if (magic.from_file(inputfile) == 'ASCII text, with CRLF line terminators'):
        copyfile(inputfile, 'inventory_maintenance_db.csv');
        parsecsv('inventory_maintenance_db.csv');
    elif ((xlsx_match.match(magic.from_file(inputfile)) != None) | (xls_match.match(magic.from_file(inputfile)) != None)):
        csv_conversion = xls2csv(inputfile);
        parsecsv(csv_conversion); 
    else:
        raise IncompatibleFileType;
        return -1;

#######################################
# Initializes the application's .csv  #
# version of the inventory with empty #
# PM date field                       #
#######################################
def parsecsv(csvfile):
    with open(csvfile, 'rb') as myFile:
        # Look for the files we need
        parser = csv.reader(myFile, delimiter=',', quotechar='"');
        for row in parser:
            # What about header files?
            row.append("No PM done"); # Append the last PM date column to each row
            row.append("No PM scheduled"); # Append the next scheduled PM date field

#######################################
# Converts a given .xls or .xlsx file # 
# to .csv format.                     #
#######################################
def xls2csv(xlsfile):
    wb = xlrd.open_workbook(xlsfile);
    sh = wb.sheet_by_name('Sheet1');
    csvfile = open('inventory_maintenance_db.csv', 'wb');
    writer = csv.writer(csvfile, quoting=csv.QUOTE_ALL);

    for row in xrange(sh.nrows):
        writer.writerow(sh.row_values(row));

    csvfile.close();
    return 'inventory_maintenance_db.csv';
