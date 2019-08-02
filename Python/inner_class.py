class outer:
    def fun(self):
        print("***outer***")




    class inner:
        def fun(self):
            print("***inner***")


o = outer()
i = outer.inner()   #creating object of inner class
o.fun()
i.fun()