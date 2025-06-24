marks=int(input("Enter your marks: "))
if(marks>=90):
    print("Student scored A grade")
    Grade="A"
elif(marks>=80):
    print("Student scored B grade")
    Grade="B"
elif(marks>=70):
    print("Student scored C grade")
    Grade="C"
else:
    print("Student scored D grade")
    Grade="D"
print("Student Grade:",Grade)