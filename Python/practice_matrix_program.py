from numpy import *

array1 = zeros((3, 3))
array2 = zeros((3, 3))

print('Enter 9 value in first matrix: ')
for i in range(3):
    for j in range(3):
        array1[i][j] = int(input())

print('Enter 9 value in second matrix: ')
for i in range(3):
    for j in range(3):
        array2[i][j] = int(input())

for i in range(3):
    for j in range(3):
        m = 0
        for t in range(3):
            m = m + array1[i][t] * array2[t][j]
        print(m, end=' ')
    print()