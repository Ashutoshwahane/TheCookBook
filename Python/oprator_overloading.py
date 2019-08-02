''' we need to make a constructor without constructor because we have to create object with the help
        of class and we have to pass the arguments it will pass to the constructor automatically '''


class Student:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def __add__(self, other):
        a = self.a + self.b
        b = other.b * other.b
        m3 = Student(a,b)
        t3 = Student(a , b)
        return t3


t1 = Student(5,5)
t2 = Student(10,10)

t3 = t1 + t2

print("Student 101 total marks -->> ",t3.a)
print("Student 102 total marks -->> ",t3.b)


#print(t1.take(2, 3))
#print(t2.take(3, 5))
