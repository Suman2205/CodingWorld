# #Qus- Write a program in python to check a whether a number is armstrong or not?
# #Ans- An Armstrong number is a number that is equal to the sum of its own digits 
# #     each raised to the power of the number of digits. 
# #     For example, 153 is an Armstrong number because 153=(1^3)+(5^3)+(3^3)

# def armstrong(num):
#     count=0
#     temp=num
#     while temp>0:
#         count+=1
#         temp=int(temp/10)
#     temp1=num
#     arm=0
#     while temp1>0:
#         r=int(temp1%10)
#         arm=arm+pow(r,count)
#         temp1=int(temp1/10)
#     if arm==num:
#         return True
#     else:
#         False
# n=int(input("Enter a positive integer number: "))
# # if you want to check a number is armstrong number or not:
# if armstrong(n):
#     print(n," is an armstrong number")
# else:
#     print(n," is not an armstrong number")
# # if you want to print all armstrong numbers lies between 0 to n:
# res=[]
# for i in range(0,n+1):
#     if armstrong(i):
#         res.append(i)
# print("All armstrong numbers lies between 0 to",n,": ",end=" ")
# print(res)

# #Qus- Write a program to check whether a number is palindrome or not:
# #Ans- A palindrome number is a number that remains the same 
# #     when its digits are reversed. 
# #     For example, 121 and 12321 are palindrome numbers.

# def palindrome(num):
#     temp=num
#     rev=0
#     while temp>0:
#         rev=(rev*10)+(temp%10)
#         temp=int(temp/10)
#     if rev==num:
#         return True
#     else:
#         return False
# n=int(input("Enter a positive integer number: "))
# #if you want to check whether a entered number is palindrome or not:
# if palindrome(n):
#     print(n," is a palindrome number")
# else:
#     print(n," is not a palindrome number")
# # if you want to print all palindrome numbers lies between 0 to n:
# res=[]
# for i in range(0,n+1):
#     if palindrome(i):
#         res.append(i)
# print("All palindrome numbers lies between 0 to",n,": ",end=" ")
# print(res)

# # Qus- write a program to check integer number is perfect number or not:
# # Ans- A perfect number is a positive integer that is equal to 
# #     the sum of its proper divisors (excluding itself). 
# #     For example, 28 is a perfect number because 
# #     its divisors (excluding itself) are 1, 2, 4, 7, and 14, and 1+2+4+7+14=28.
   
# def perfect(num):
#     count=0
#     for i in range(1,num):
#         if num%i==0:
#             count+=i
#         if count>num:
#             return False
#     if count==num:
#         return True
#     else:
#         return False
# n=int(input("Enter a positive integer number: "))
# #if you want to check whether a entered number is perfect or not:
# if perfect(n):
#     print(n," is a perfect number")
# else:
#     print(n," is not a perfect number")
# # if you want to print all perfect numbers lies between 0 to n:
# res=[]
# for i in range(0,n+1):
#     if perfect(i):
#         res.append(i)
# print("All perfect numbers lies between 0 to",n,": ",end=" ")
# print(res)


# #Qus- write a program in python to check whether a number is prime or not:
# #Ans- A prime number is a number greater than 1 that has no positive 
#       divisors other than 1 and itself. Examples include 2, 3, 5, 7, 11, etc
# def prime(num):
#     count=0
#     for i in range(1,num):
#         if num%i==0:
#             count+=1
#         if count>1:
#             return False
#     return True
# n=int(input("Enter a positive intger number: "))
# # if you want to check whether a entered number is prime or not: 
# if prime(n):
#     print(n," is a prime number")
# else:
#     print(n," is not a prime number")
# # if you want to print all prime numbers lies between 2 to n:
# res=[]
# for i in range(2,n+1):
#     if prime(i):
#         res.append(i)
# print("All the prime numbers lies between 2 to",n,": ",end=" ")
# print(res) 


# #Qus- Write a program in python to check whether a number is Happy number or not: (Very Very less Chance to come)
# #Ans- A happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit.
# #     For example: 19 is happy number. 1^2 + 9^2 =82, 8^2 + 2^2 =68, 6^2 + 8^2=100, 1^2 + 0^2 + 0^2=1. 
# #     As the end 1 comes so the number is a happy number.
# def is_happy_number(num):
#     def get_next(n):
#         return sum(int(digit)**2 for digit in str(n))
#     seen_numbers = set()
#     while num != 1 and num not in seen_numbers:
#         seen_numbers.add(num)
#         num = get_next(num)
    
#     return num == 1
# n=int(input("Enter a positive integer number: "))
# if is_happy_number(n):
#     print(f"{n} is a happy number!")
# else:
#     print(f"{n} is not a happy number.")


# #Qus- Write a program in python to check whether a number is automorphic number or not: 
# #Ans- An automorphic number (or curious number) is a number whose 
# #     square ends in the same digits as the number itself. 
# #     For example, 25 is an automorphic number because: 25^2 = 625
# def automorphic(num):
#     square=num**2
#     if str(square).endswith(str(num)):
#         return True
#     else:
#         return False
# n=int(input("Enter a positive integer number: "))
# #if you want to check whether a number is automorphic or not:
# if automorphic(n):
#     print(n," is an automorphic number")
# else:
#     print(n," is not an automorphic number")
# #if you want to print all the automorphic numbers lies between 1 to n:
# res=[]
# for i in range(1,n+1):
#     if automorphic(i):
#         res.append(i)
# print("All the automorphic numbers lies between 1 to",n,":",end=" ")
# print(res) 


# #Qus- Write a program to print first n fibonacci numbers:
# #Ans- The Fibonacci series is a sequence of numbers where each number 
#       is the sum of the two preceding ones, starting from 0 and 1.
# def fibo(num):
#     if num==0:
#         return 0
#     if num==1 or num==2:
#         return 1
#     return fibo(num-1)+fibo(num-2)
# n=int(input("Enter a no. of elements of fibonacci series you want to print: "))
# res=[]
# for i in range(0,n+1):
#     res.append(fibo(i))
# print("The Fibonacci series: ",res)


# #Qus- Write a program to print reverse of a string:
# words=input("Enter any string: ")
# print("The reversed string: ",end="")
# for i in range(len(words)-1,-1,-1):
#     print(words[i],end="")


# #Qus- Write a program to find a character is present in string or not: 
# string=input("Enter any string: ")
# char=input("Enter a character which you want to find in entered string: ")
# if string.find(char)!=-1:
#     print(char," is present in entered string at index",string.index(char))
# else:
#     print(char," is not present in string")
# #Or
# for i in range(len(string)):
#     if string[i]==char:
#         print(char," is present in entered string at index",i)
#         break
#     else:
#         continue
# else:
#     print(char," is not present in string")


# #Qus-: Program to Calculate GCD of two numbers
# a=int(input("Enter first number: "))
# b=int(input("Enter second number: "))
# for i in range(min(a,b),0,-1):
#     if a%i==0 and b%i==0:
#         gcd=i
#         break
#     else:
#         continue
# print("The GCD of ",a," and ",b," is ",gcd)


# #Qus-:  Program for calculator
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


# #Qus- Write a Program to find maximum number in List
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


# #Qus- Write a Program for Linear search 
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


# #Qus- Write a Program for Binary search
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


# #Qus- Write a Program for Insertion Sort
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


# #Qus- Write a Program for Selection Sort
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


# #Qus- Write a Program to find word count from text file
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


# #Qus- Write a Program to find First N Prime numbers
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


# #Qus- Write a Program to calculate Matrix Multiplication
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


# #Qus- Write a Program to find nearest integer valued square root of number
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


# file=open("today.txt","w+")
# file.write("This is today's file\n")
# file.write("This is my file\n")
# c=["This is first line\n","This is second line\n","This is third line\n"]
# file.writelines(c)
# file.close()

# file=open("today.txt","a")
# file.write("This is last line")
# file.close()
# file=open("today.txt","r")
# print(file.read())
# file.seek(0)
# print(file.readlines())
# file.close()

# with open("today.txt","r+") as file:
#     print(file.read())
#     file.write("This is a today's file")

# string=input("Enter any word: ")
# # i=0
# # j=len(string)-1
# # while i<j:
# #     if string[i]!=string[j]:
# #         print("Not Palindrome")
# #         break
# #     else:
# #         i+=1
# #         j-=1
# #         continue
# # else:
# #     print("Palindrome")
# l1=[]
# l2=[]
# for i in string:
#     l1.append(i)
#     l2.append(i)
# l1.reverse()
# if l1==l2:
#     print("Palindrome")
# else:
#     print("Not Palindrome")

# import csv
# with open("data.csv","w",newline="")as file:
#     writer=csv.writer(file)
#     writer.writerow(["Name","Age","City"])
#     writer.writerows([["Alice","30","New York"],["Bob","25","Los Angeles"]])
# with open("data.csv","r")as file:
#     reader=csv.reader(file)
#     for row in reader:
#         print(row)


