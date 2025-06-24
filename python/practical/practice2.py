#program-1
# a=int(input("Enter first number: "))
# b=int(input("Enter second number: "))
# for i in range(min(a,b),0,-1):
#     if a%i==0 and b%i==0:
#         gcd=i
#         break
#     else:
#         continue
# print("The GCD of",a,"and",b,"is",gcd)

#program-2
# def nearestSqrt(n):
#     lo=1
#     hi=n
#     while lo<=hi:
#         mid=(lo+hi)//2
#         if mid*mid<=n:
#             ans=mid
#             lo=mid+1
#         else:
#             hi=mid-1
#     return ans
# def cond(n):
#     if n<0:
#         return True
#     else:
#         return False
# while True:
#     try:
#         num=int(input("Enter any positive integer number: "))
#     except ValueError:
#         print("Please enter valid input(integer number)")
#         continue
#     if cond(num):
#         print("Please enter positive integer number")
#         continue
#     print("The nearest square root of",num,"is",nearestSqrt(num))
#     q=input("Do Another(Y/N): ")
#     if q=='Y':
#         continue
#     else:
#         break

#program-3
# def power(n,p):
#     ans=1
#     for i in range(1,p+1):
#         ans=ans*n
#     return ans
# num=float(input("Enter base number: "))
# p=int(input("Enter number to which you have to raised base number: "))
# print("The value of",num,"^",p,"is",power(num,p))

#program-4
# def maxNumber(arr):
#     max=arr[0]
#     for i in arr:
#         if max<i:
#             max=i
#         else:
#             continue
#     return max
# num=list(map(int,input("Enter all element with spaces: ").split()))
# if num:
#     res=maxNumber(num)
#     print("The maximum value in list is",res,"and its index is",num.index(res))
# else:
#     print("The list is empty")

#program-8
# def prime(n):
#     count=0
#     for i in range(1,(n//2)+1):
#         if n%i==0:
#             count+=1
#         if count>1:
#             return False
#     return True
# num=int(input("Enter number upto which you want to find prime numbers: "))
# res=[]
# for i in range(2,num+1):
#     if prime(i):
#         res.append(i)
#     else:
#         continue
# print("The prime number upto",num,"are: ",res)

#program-9
# def inputMatrix(n,m):
#     res=[]
#     for i in range(n):
#         temp=[]
#         for j in range(m):
#             print("Enter element arr",i,j,": ",end=" ")
#             x=int(input())
#             temp.append(x)
#         res.append(temp)
#     return res
# def matrixMul(A,B):
#     ans=[]
#     for i in range(len(A)):
#         temp=[]
#         for j in range(len(B[0])):
#             c=0
#             for k in range(len(B)):
#                 c=c+A[i][k]*B[k][j]
#             temp.append(c)
#         ans.append(temp)
#     return ans
# def show(arr):
#     for i in range(len(arr)):
#         for j in range(len(arr[0])):
#             print(arr[i][j],end=" ")
#         print(end="\n")
# r1=int(input("Enter no. of rows for first matrix: "))
# c1=int(input("Enter no. of columns for first matrix: "))
# A=inputMatrix(r1,c1)
# r2=int(input("Enter no. of rows for second matrix: "))
# c2=int(input("Enter no. of columns for second matrix: "))
# B=inputMatrix(r2,c2)
# print("First Matrix: ",end="\n")
# show(A)
# print("Second Matrix: ",end="\n")
# show(B)
# if c1==r2:
#     res=matrixMul(A,B)
#     print("Resultant Matrix: ",end="\n")
#     show(res)
# else:
#     print("Matrices are not compatible for multiplication")



