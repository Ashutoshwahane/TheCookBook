from numpy import *
a = array([1,2,3,4])
b = array([1,2,3,6])
c = array([])
for i in range(len(a)):
    c = a[i] + b[i]
    print(c)

