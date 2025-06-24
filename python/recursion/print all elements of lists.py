def print_list(list,idx=0):
    if(idx==len(list)):
        return
    print(list[idx])
    return print_list(list,idx+1)
fruits=[]
n=int(input("Enter no. of elements you want in lists:"))
for i in range(0,n,1):
    fruits.append(input("enter element:"))
print_list(fruits)
