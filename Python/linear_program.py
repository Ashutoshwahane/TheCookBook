from numpy import *
list = []
length = int(input("Enter the  length =>> "))
for i in range(length):
    no = int(input("Enter the next number ->>> "))
    list.append(no)
find = int(input("Enter the you want to find ==>> "))

for i in range(length):
    if list[i]==find:
        print(list[i],"this is at ",i+1)
        break
