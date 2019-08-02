from array import *
arr = array('i',[])
len = int(input("Enter a length = "))
for i in range(len):
    val = int(input("Enter the values = "))
    arr.append(val)
for i in range(len):
    print(arr[i])

x = int(input("Enter a value to search = "))
print(arr.index(x))
k = 0
for e in arr:
    if e==x:
        print("The idex value is ",k)
    k+=1


