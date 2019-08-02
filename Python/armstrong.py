class test:
    def armstrong(self):
        n = int(input("Enter the number to check Armstrong = "))
        temp = n
        i = 1
        sum = None
        while i<0:
             r = n % 10
             s = s + (r * r * r)
             sum = n / 10
             i = i + 1
        if temp== sum:
            print("arm")
a = test()
a.armstrong()
