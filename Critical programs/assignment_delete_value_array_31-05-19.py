from array import *
arr = array('i',[])
for i in range(5):
    no = int(input("Enter a number = "))
    arr.append(no)
k = 0
for i in range(5):
    if i==2:
        print("the index ",k," value is removed ")
    else:
        print("The idex value = ",k , "The value is = ",arr[i])
    k += 1
