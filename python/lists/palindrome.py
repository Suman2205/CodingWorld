print("Enter a list:")
n=int(input("Enter no. of terms you want in list:"))
list=[]
i=1
while(i<=n):
    list.append(input("enter any number:"))
    i+=1
copy_list=list.copy()
copy_list.reverse()
if(copy_list==list):
    print("Entered list is palindrome")
else:
    print("Entered list is not palindrome")  
