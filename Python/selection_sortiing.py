from numpy import *
def find(list):
    for i in range(length):
        min_value = i
        for j in range(i,length):
            if list[j] < list[min_value]:
                min_value = j
        temp = list[i]
        list[i] = list[min_value]
        list[min_value] = temp

list = []
length = int(input("Enter the length -->> "))
for i in range(length):
    no = int(input("Enter the number -->> "))
    list.append(no)
find(list)
print(list)