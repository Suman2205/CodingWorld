with open("student.txt","w") as file:
    file.write("This is my file\n")
    l=["This is first line\n","This is second line\n","This is third line\n"]
    file.writelines(l)
with open("student.txt","a") as f:
    f.write("This is last line\n")
with open("student.txt","r") as file:
    print(file.readline(),end="\n")
    print(file.readline(),end="\n")
    print(file.readlines(),end="\n")
    file.seek(0)
    print(file.read(),end="\n")
with open("student.txt","r+") as file:
    c=file.read()
    b=c.split()
    count=0
    for i in b:
        count+=1
    print("The total numbers of words in file are ",count)