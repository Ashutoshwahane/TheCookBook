from mysql import connector as c
#mydb = connector.connect(host="localhost", user="root", passwd="Ashutosh@1998")
mydb = c.connect(host="localhost", user="willskhalifa", passwd="willskhalifa",database="Ashutosh")
mycursor = mydb.cursor("select *from student")
for i in mycursor:
    print(i)