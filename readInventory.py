import xlrd
import csv
import sys

def xls2csv(xlsfile):

    wb = xlrd.open_workbook(xlsfile);
    sh = wb.sheet_by_name('Sheet1');
    csvfile = open('inventory_maintenance_db.csv', 'wb');
    writer = csv.writer(csvfile, quoting=csv.QUOTE_ALL);

    for row in range (1, sh.nrows+1):
        writer.writerow(sh.row_values(row));

    csvfile.close();

if __name__ == "__main__":
    xls2csv(sys.argv[1]);


