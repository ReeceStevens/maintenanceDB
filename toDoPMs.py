################################################
# Read the database and return an array of all #
# maintenance tasks that are past due          #
################################################

def getToDo():
    db = 'inventory_maintenance_db.csv';
    todo = [];
    with open(db, 'rb') as myFile:
        parser = csv.reader(myFile, delimiter=",", quotechar='"');
        for row in parser[1:]:
            # If next PM date is less than today, task needs to be done
    return todo;
