class Student:
    standard="9th"
    def __init__(self,fullname,section,roll_no) :
        self.name=fullname
        self.section=section
        self.roll_no=roll_no
    def show(self):
        print("Particular Student details:")
        print("Student name:",self.name)
        print("Class:",Student.standard,self.section)
        print("Roll no:",self.roll_no)
s1=Student(input("Enter name:"),input("Enter your class section:"),int(input("Enter your class roll no:")))
s1.show()
        