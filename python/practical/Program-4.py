def maxNumber(list):
    max=0
    for i in list:
        if i>max:
            max=i
        else:
            continue
    return max
a=list(map(int,input("Enter all elements with spaces: ").split()))
x=maxNumber(a)
if a!=None:
    print("Maximum number in entered list: ",x)
else:
    print("The list is empty")
