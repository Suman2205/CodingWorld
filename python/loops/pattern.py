#square printing:
n=int(input("Enter no. of lines: "))
for i in range(0,n):
    for j in range(0,n):
        print("*",end=" ")
    print(end="\n")

#right angled triangle:
n=int(input("Enter no. of lines: "))
for i in range(0,n):
    for j in range(i+1):
        print("*",end=" ")
    print(end="\n")

#left sided right angled triangle: 
n=int(input("Enter no. of lines: "))
for i in range(0,n):
    for j in range(0,n-i-1):
        print(" ",end=" ")
    for k in range(i+1):
        print("*",end=" ")
    print(end="\n") 

#pyramid printing:
n=int(input("Enter no. of lines: "))
for i in range(0,n):
    for j in range(0,n-i):
        print(" ",end=" ")
    for k in range(0,2*i+1):
        print("*",end=" ")
    print(end="\n")



