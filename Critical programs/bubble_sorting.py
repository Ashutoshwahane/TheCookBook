from numpy import *
def find(list):
    for i in range(len(list)-1,0,-1):
        for j in range(i):
            if list[j]>list[j+1]:
                temp = list[j]
                list[j] = list[j+1]
                list[j+1] = temp
list = []
length = int(input("Enter the length -->> "))
for i in range(length):
    no = int(input("Enter the number -->> "))
    list.append(no)
find(list)
print(list)