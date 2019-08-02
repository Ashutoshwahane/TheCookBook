import math as m

fact = 1
no = int(input("Enter a number  to check its factorial = "))
print(m.factorial(no))
for i in range(1,no+1):
    fact = fact * i
    print(fact)

