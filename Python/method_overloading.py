'''we don't have method overloading in python that's why we are using tricks'''


class Test:
    def same(self,a=None,b=None,c=None):
        if a!=None and b!=None and c!=None :
            print(a)
            print(b)
            print(c)
        elif a!=None and b!=None:
            print(a)
            print(b)
        else:
            print(a)



t = Test()

t.same(1,2,3)