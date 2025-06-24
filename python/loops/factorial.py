n=int(input("Enter number of which you want to get factorial:"))
fact=1
for i in range(1,n+1,1):
    fact*=i
print("The factorial of",n,"is",fact)