class Student:
    @staticmethod
    def college():
        print("ABC College")
        Student.college_name="ABC College"
    def __init__(self,name):
        self.name=name
s1=Student("Suman")
s2=Student("Kisna")
print(s1.name)
print(s1.college())
print(Student.college())