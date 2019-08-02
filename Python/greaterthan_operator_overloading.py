class Student:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def __gt__(self, other):
        s1 = self.a + self.b
        s2 = other.a + other.b
        if s1 > s2:
            return True
        else:
            return False


    def  __str__(self):
        return "{} {} ".format(self.a,self.b)

m1 = int(input("Enter the student 1 marks --> "))
m2 = int(input("Enter the student 1 marks --> "))
t1 = Student(m1,m2)
m1 = int(input("Enter the student 2 marks --> "))
m2 = int(input("Enter the student 2 marks --> "))
t2 = Student(m1,m2)

if t1>t2:
    print("***Student 1 wins***")
else:
    print("***Student 2 wins***")


'''printing the value of object '''
print(t1.__str__())