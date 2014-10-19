import csv

#######################################################
# When prompted by the interface, this function will  #
# read the .csv database and return its contents in a #
# 2D array.                                           #
#######################################################
def sendRow(num_row):
    db = 'inventory_maintenance_db.csv';
    row_contents = [];
    with open(db, 'rb') as myFile:
        parser = csv.reader(myFile, delimiter=',', quotechar='"');
        row_contents = parser[num_row];
    return row_contents;




