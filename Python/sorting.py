from array import array
val = array('i',[5,9,6,4,8,5,3,4,1,0,4])

#val.reverse()
#for i in range(len(val)):
#    print(val[i])

#print(sorted(val))

newarr = array(val.typecode, (a for a in val))
#for e in val:
#    print("the square of number = ",e*e)

i = 0
while i<len(val):
    print(val[i])
    i+=1
