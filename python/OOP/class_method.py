class Student:
    @classmethod
    def college(cls,school_name):
        cls.school_name=school_name
    def __init__(self,name,roll_no):
        self.name=name
        self.roll_no=roll_no
s1=Student("Suman",77,)
s1.college("ABC school")
print(s1.school_name)
print(s1.name)
print(s1.roll_no)