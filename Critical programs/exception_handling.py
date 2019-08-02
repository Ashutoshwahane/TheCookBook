class Test:
    def show(self):
        try:
            a = int(input("Enter the first number ==> "))
            b = int(input("Enter the second number ==> "))
            return a/b

        except ZeroDivisionError as z:
            print("abe chutiye zero se koi number divide hota hai kya ",z)
        except ValueError as v :
            print("abe chutiye kisi character se number divide hota hai kya ",v)



t = Test()
result = t.show()
print(result)
