# program-1: Program to Calculate GCD of two numbers
# a=int(input("Enter first number: "))
# b=int(input("Enter second number: "))
# for i in range(min(a,b),0,-1):
#     if a%i==0 and b%i==0:
#         gcd=i
#         break
#     else:
#         continue
# print("The GCD of ",a," and ",b," is ",gcd)


# program-2:  Program for calculator
# def calculator(a,op,b):
#     if op=='+':
#         return a+b
#     elif op=='-':
#         return a-b
#     elif op=='*':
#         return a*b
#     elif op=='^':
#         return a**b
#     elif op=='/':
#         if b==0:
#             return "Not Defined"
#         else:
#             return a/b
#     else:
#         return "Invalid Operator, Please enter valid operator"
# while True:
#     try:
#         a=float(input("Enter first number: "))
#         op=input("Enter operator: ")
#         b=float(input("Enter second number: "))
#     except ValueError:
#         print("Please enter valid input(number)")
#         continue
#     res=calculator(a,op,b)
#     print("The value of ",a,op,b," is ",res)
#     query=input("Enter Y for next calculation if any otherwise enter N: ")
#     if query=='Y':
#         continue
#     else:
#         break


# program-3:  Program to find maximum number in List
# def maximum(a):
#     res=a[0]
#     for i in a:
#         if i>res:
#             res=i
#         else:
#             continue
#     return res
# num=list(map(int,input("Enter all elements with spaces: ").split()))
# # if not num:
# #     num=None
# if num:
#     ans=maximum(num)
#     print("The maximum number in the list: ",ans)
# else: 
#     print("The list is empty")


# program-4:  Program for Linear search 
# def linearSearch(arr,x):
#     for i in arr:
#         if i==x:
#             return "The number",x,"is found at location ",arr.index(x)
#         else:
#             continue
#     return "The number",x,"is not present in the list "
# num=list(map(int,input("Enter all elements with spaces: ").split()))
# x=int(input("Enter the number which you want to search in list: "))
# if num:
#     res=linearSearch(num,x)
#     print(res)
# else:
#     print("The list is empty")


# program-5:   Program for Binary search
# def binarySearch(arr,x):
#     lo=0
#     hi=len(arr)-1
#     while lo<=hi:
#         mid=(lo+hi)//2
#         if arr[mid]==x:
#             return mid
#         elif arr[mid]>x:
#             hi=mid-1
#         else:
#             lo=mid+1
#     return -1
# num=list(map(int,input("Enter all elements with spaces: ").split()))
# x=int(input("Enter the number which you want to search in the list: "))
# if num:
#     sortedNum=sorted(num)
#     loc=binarySearch(sortedNum,x)
#     res=num.index(sortedNum[loc])
#     if loc!=-1:
#         print("The number",x,"is present at location",res)
#     else:
#         print("The number has not found")
# else:
#     print("The list is empty")


# program-6:    Program for Insertion Sort
# def insertionSort(arr):
#     for i in range(1,len(arr)):
#         c=arr[i]
#         j=i-1
#         while j>=0 and arr[j]>c:
#             arr[j+1]=arr[j]
#             j-=1
#         arr[j+1]=c
#     return res
# num=list(map(int,input("Enter all elements with spaces: ").split()))
# res=insertionSort(num)
# print("The sorted array: ",res)


# program-7:   Program for Selection Sort
# def selectionSort(arr):
#     for i in range(0,len(arr)):
#         min=i
#         for j in range(i+1,len(arr)):
#             if arr[j]<arr[min]:
#                 min=j
#         arr[i],arr[min]=arr[min],arr[i]
#     return arr
# num=list(map(int,input("Enter all elements with spaces: ").split()))
# res=selectionSort(num)
# print("The sorted array: ",res)


# program-8:   Program to find word count from text file
# with open("practice.txt","w") as file:
#     file.write("This is my file\n")
#     l=["This is first line\n","This is second line\n","This is third line\n"]
#     file.writelines(l)
# with open("practice.txt","a") as file:
#     file.write("This is last line\n")
# with open("practice.txt","r") as f:
#     c=f.read()
#     print(c)
#     f.seek(0)
#     a=f.readline()
#     print(a)
#     l=f.readlines()
#     print(l)
# with open("practice.txt","r+") as f:
#     w=f.read()
#     l=w.split()
#     count=0
#     for i in l:
#         count+=1
#     print("The total number of words in file is ",count)


# program-9:    Program to find First N Prime numbers
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
# print(res)


# program-10:   Program to calculate Matrix Multiplication
# def inputMatrix(n,m):
#     res=[]
#     for i in range(n):
#         temp=[]
#         for j in range(m):
#             print("Enter the element arr",i,j,": ",end="")
#             num=int(input())
#             temp.append(num)
#         res.append(temp)
#     return res
# def printMatrix(arr):
#     for i in range(len(arr)):
#         for j in range(len(arr[i])):
#             print(arr[i][j],end=" ")
#         print(end="\n")
# def matrixMul(A,B):
#     res=[]
#     for i in range(len(A)):
#         temp=[]
#         for j in range(len(B[0])):
#             c=0
#             for k in range(len(B)):
#                 c+=A[i][k]*B[k][j]
#             temp.append(c)
#         res.append(temp)
#     return res       
# r1=int(input("Enter no. of rows in first matrix:"))
# c1=int(input("Enter no. of columns in first matrix:"))
# A=inputMatrix(r1,c1)
# print("First Matrix: ",end="\n")
# printMatrix(A)
# r2=int(input("Enter no. of rows in second matrix:"))
# c2=int(input("Enter no. of columns in second matrix:"))
# B=inputMatrix(r2,c2)
# print("Second Matrix: ",end="\n")
# printMatrix(B)
# if c2!=r1:
#     print("Matrix multiplication is not compatible for given matrices")
# else:
#     ans=matrixMul(A,B)
#     print("The resultant Matrix: ")
#     printMatrix(ans)


# Program-11:   Program to find nearest integer valued square root of number
# def sqrt(num):
#     ans=0
#     lo=1
#     hi=num
#     while lo<=hi:
#         mid=int((lo+hi)/2)  
#         if mid*mid<=num:
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
#         n=int(input("Enter positive integer number: "))
#     except ValueError:
#         print("Please Enter valid input( integer number)")
#         continue
#     if cond(n):
#         print("Please Enter positive integer number")
#         continue
#     print("Nearest integer valued Square root of ",n," is: ",sqrt(n))
#     q=input("Do Another(Y/N):")
#     if q=='Y':
#         continue
#     else:
#         break
 
