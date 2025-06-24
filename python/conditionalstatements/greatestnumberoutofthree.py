n1=int(input("Enter first number:"))
n2=int(input("Enter second number:"))
n3=int(input("Enter third number:"))
if(n1>n2 and n1>n3):
    print("first number is largest that is",n1)
elif(n2>n3):
    print("second number is largest that is",n2)
else:
    print("third number is largest that is",n3)