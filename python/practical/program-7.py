def insertionSort(a):
    for i in range(1,len(a)):
        c=a[i]
        j=i-1
        while j>=0 and a[j]>c:
            a[j+1]=a[j]
            j=j-1
        a[j+1]=c
    return a
Num=list(map(int,input("Enter all elements with spaces: ").split()))
Result=insertionSort(Num)
print("The sorted array is ",Result)