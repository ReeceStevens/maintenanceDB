import csv

# Return number of rows in the database to the GUI
def numRowsToUI():
    db = 'inventory_maintenance_db.csv';
    numRows = 0;
    with open(db, 'rb') as myFile:
        parser = csv.reader(myFile, delimiter=',', quotechar='"');
        for row in parser:
            numRows += 1;
    return numRows;
