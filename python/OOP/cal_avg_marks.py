class Student:
    def __init__(self,name,roll_no,no_of_sub,marks):
        self.name=name
        self.roll_no=roll_no
        self.no_of_sub=no_of_sub
        self.marks=marks
    def cal_avg_marks(self):
        sum=0
        for val in self.marks:
            sum+=val
        print("Hi",self.name,"your avg score is",sum/self.no_of_sub)
n=int(input("Enter total no. of subjects:"))
marks=[]
marks.append(int(input("Enter your phy marks:")))
marks.append(int(input("Enter your chem marks:")))
marks.append(int(input("Enter your math marks:")))
s1=Student(input("Enter your name:"),int(input("Enter your class no:")),n,marks)
s1.cal_avg_marks()