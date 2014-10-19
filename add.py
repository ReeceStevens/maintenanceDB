import csv

def addvalue(fieldinfo): 

    db='inventory_maintenance_db.csv'
    with open(db, 'wb') as csvfile: 
        write = (csvfile, delimiter = ',', quotechar = '"', quoting = csv.QUOTE_ALL)
        write.writerow([fieldinfo])  
