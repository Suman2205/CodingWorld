def binarySearch(arr,x):
    lo=0
    hi=len(arr)-1
    while lo<=hi:
        mid=(lo+hi)//2
        if arr[mid]==x:
            return mid
        elif arr[mid]<x:
            lo=mid+1
        else:
            hi=mid-1
    return -1
num=list(map(float,input("Enter all elements with space: ").split()))
sortedNum=sorted(num)
x=float(input("Enter the number which you want to search in list: "))
res=binarySearch(sortedNum,x)
loc=num.index(sortedNum[res])
if res!=-1:
    print("The number",x,"has found at index",loc)
else:
    print("The number",x,"has not found")