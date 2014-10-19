import csv

#######################################################
# When prompted by the interface, this function will  #
# read the .csv database and return its contents in a #
# 2D array.                                           #
#######################################################
def sendData():
    db = 'inventory_maintenance_db.csv';
    table = [];
    with open(db, 'rb') as myFile:
        parser = csv.reader(myFile, delimiter=',', quotechar='"');
        for row in parser:
            table.append(row);
    return table;



