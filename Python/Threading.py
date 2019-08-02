'''to run the Thread we have to run()method compulsary'''


from threading import *
from time import *
class A(Thread):
    def run(self):
        for i in range(10):
            print("A",i)
            sleep(1)


class B(Thread):
    def run(self):
        for i in range(10):
            print("B", i)
            sleep(1)

a1 = A()
b1 = B()

a1.start()
sleep(0.2)
b1.start()

a1.join()
b1.join()

