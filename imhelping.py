import csv


def (fieldvalue):

    table=[] 

    db='inventory_maintenance_db.csv'
    with open(db, 'wb') as csvfile:
        write = csv.writer(csvfile, delimiter=',', quotechar='"', quoting=csv.QUOTE_ALL) 
        for row in write:
            if (fieldvalue != row): 
                table.append(row)
    with open(db, 'wb') as csvfile: 
        write=csv.writer(csvfile, delimiter=',', quotechar='"', quoting=csv.QUOTE_ALL)
        for x in range(0, len(table)+1): 
            write.writerow(table[x]) 
                        





                



