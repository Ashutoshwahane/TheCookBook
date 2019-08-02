from array import *
temp = 0
a = array('i',[])
l = int(input("Enter the length = "))
for i in range(l):
    no =int(input("Enter the values = "))
    a.append(no)
for i in range(len(a)):
    if a[i]>a[i]:
        temp = a[i]
    elif temp < a[i]:
        temp = a[i]
print(temp)