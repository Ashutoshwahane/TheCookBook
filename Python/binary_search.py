from numpy import *
list = []
length = int(input("Enter the length =>>> "))
for i in range(length):
    no = int(input("Enter the next number -->>"))
    list.append(no)
lb = 0
position = 0
ub = len(list) - 1
search = int(input("Enter  the number you want to search ==>> "))
while lb<=ub:
    md_index = (lb+ub)//2
    if list[md_index] == search:
        print("found")
        position = md_index
        break
    else:
        if list[md_index]<search:
            lb = md_index
        else:
            ub = md_index

print("here is the position  -->> ",position)