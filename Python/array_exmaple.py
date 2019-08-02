from numpy import *
string = []
for i in range(1,10):
    name = input("Enter the {} names => ".format(i))
    string.append(name)
for e in string :
    if len(e) >= 5 :
        print(e)
    else:
        continue