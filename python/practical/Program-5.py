def linearSearch(num,x):
    for i in num:
        if i==x:
            return "The number",x, " has found at location ",num.index(i)
    else:
        return "The number" ,x," has not found"
num=list(map(int,input("Enter all elements with spaces: ").split()))
x=int(input("Enter number which you want to search in list of numbers: "))
res=linearSearch(num,x)
if num!=None:
    print(res)
else:
    print("The list is empty")
