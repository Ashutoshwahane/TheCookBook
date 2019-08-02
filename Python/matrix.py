from numpy import *
arr1 = array([1,2,3,4,5,6])
arr2 = array([7,8,9,10,11,12])
m1 = matrix(arr1.reshape(2,3))
m2 = matrix(arr2.reshape(3,2))
m3 = matrix([])
for i in range(2):
    for j in range(2):
        for k in range(3):
            m3[k] = arr1[i]*arr2[j]
print(m3)