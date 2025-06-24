n=int(input("Enter no. of terms you want in series:"))
a=0
b=1
c=0
for i in range(1,n+1,1):
    a=b
    b=c
    print(c,end=" ")
    c=a+b
    