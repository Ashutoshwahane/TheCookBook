'''This is the Exmaple of * oprator overloading'''


class Student:
    def __init__(self,a,b):
        self.a = a
        self.b = b

    def __mul__(self, other):
        a = self.a * self.b
        b = other.a * other.b

        m3 = Student(a, b)
        return m3


m1 = Student(12,12)
m2 = Student(9,9)
m3 = m1 * m2

print("Student 101 total marks -->> ",m3.a)
print("Student 102 total marks -->> ",m3.b)


#print(t1.take(2, 3))
#print(t2.take(3, 5))
