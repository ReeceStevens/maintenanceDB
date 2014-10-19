################################################
# Read the database and return an array of all #
# maintenance tasks that are past due          #
################################################
import datetime

def getToDo():
    db = 'inventory_maintenance_db.csv';
    todo = [];
    today = datetime.date.today();
    result = datetime.timedelta();
    with open(db, 'rb') as myFile:
        parser = csv.reader(myFile, delimiter=",", quotechar='"');
        for row in parser:
            # Date format: DD.MM.YYYY
            otherdate = row[len(row)-1];
            if (otherdate = 'No PM scheduled'):
                print("No PM was scheduled for this row.");
                continue;
            dateinfo = otherdate.split(str=".");
            servicedate = datetime.date(dateinfo[2], dateinfo[1], dateinfo[0]);
            result = servicedate - today;
            if (result.total_seconds() <= 0):
                todo.append(row);
            else:
                continue;

            # If next PM date is less than today, task needs to be done
        
    return todo;
