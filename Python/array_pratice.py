from numpy import *
arr1 = array([1,2,3,4,5])
arr2 = arr1.view()          #this is shallow copy
arr1[2] = 10
print(arr1)
print(arr2)
print(id(arr1))
print(id(arr2))



darr1 = array([9,8,7,6,5,4])
darr2 = darr1.copy()           #this is deep copy
darr1[0] = 10
print(darr1)
print(darr2)

print()
a = array([1,2,3,4])
b = array([1,2,3,4])
print(add(a,b))