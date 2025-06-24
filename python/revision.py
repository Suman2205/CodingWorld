# n=int(input("Enter any number: "))
# name=input("Enter any name: ")
# x=5
# y=5.5
# res=int(x+y)
# print(res)
# res=float(x+y)
# print(res)
# a=5
# b=7
# print(a & b)
# print(a | b)
# print(~a)
# print(name[2])
# print(name[1:4])
# print(name[:4])
# print(name[0:])
# print(name.endswith("an"))
# name.capitalize()
# print(name)
# print(name.replace("suman","neha"))
# print(name)
# print(name.find("man"))
# print(name.count("a"))
# if(a>b):
#     print(a,"is greater than",b)
# elif(a==b):
#     print(a,"is equal to",b)
# else:
#     print(b,"is greater than",a)
# marks=[]
# marks.append(input("Enter phy marks:"))
# marks.append(input("Enter chem marks:"))
# marks.append(input("Enter math marks:"))
# marks.sort()
# print(marks)
# marks.sort(reverse=True)
# print(marks)
# marks.reverse()
# print(marks)
# marks.insert(3,7)
# print(marks)
# marks.insert(1,60)
# print(marks)
# marks.remove(input("Enter number which you want to remove:"))
# print(marks)
# marks.pop()
# print(marks)
student={}
# print(type(student))
# student={
#     "name":"Suman",
#     "subjects":{
#         "phy":85,
#         "chem":75,
#         "math":85
#     },
#     "class":"12th",
#     "roll no.":25
# }
# print(student)
# print(student["subjects"])
# print(student["subjects"]["chem"])
# print(student["class"])
# print(student["roll no."])
# print(student.keys())
# print(student.values())
# print(student.items())
# print(student.get("name"))
# student.update({"name":input("Enter your name:")})
# print(student)
# marks={}
# marks.update({"phy":input("Enter phy marks:")})
# marks.update({"chem":input("Enter chem marks:")})
# marks.update({"math":input("Enter math marks:")})
# student.update({"subjects":marks})
# print(student)
n=int(input("Enter no. of number of lines:"))
for i in range(1,n+1):
    for j in range(1,n-i+1):
        print(" ",end="")
    for k in range(1,2*i):
        print("*",end="")
    print()
