from array import *
arr = array('i',[6,8,6,3,1,8,9,4,0])
for i in range(len(arr)):
    for j in range(i+1):
        if arr[j]>arr[i]:
            print(arr[j],arr[i])
            arr[i],arr[j]=arr[j],arr[i]


for a in range(len(arr)):
    print(arr[a],end="")