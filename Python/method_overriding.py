class A:
    def show(self):
        print("class A")

class B(A):
    def show(self):
        print("class B")
obj = B()
obj.show()