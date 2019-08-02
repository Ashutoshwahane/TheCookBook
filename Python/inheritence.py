class A:
    def __init__(self):
        print("***class A*** ")
class B:
    def __init__(self):
        print("***class B*** ")
class C(A,B):
    def __init__(self):

        print("***class c*** ")
        super().__init__()

c = C()
