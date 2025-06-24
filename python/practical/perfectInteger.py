def perfect(n):
    temp=0
    for i in range(1,n):
        if n%i==0:
            temp+=i
        if temp>n:
            return False
    if temp==n:
        return True
    else:
        return False
num=int(input("Ente any integer number: "))
res=[]
for i in range(1,num+1):
    if perfect(i):
        res.append(i)
print(res)
# if perfect(num):
#     print(num," is a perfect integer")
# else:
#     print(num," is not a perfect integer")