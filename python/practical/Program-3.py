a=float(input("Enter any number:"))
b=int(input("Enter power with you have to raised entered number:"))
res=1
for i in range(1,b+1):
    res=res*a
res=round(res,2)
print("The value of",a,"^",b,"is",res)