def selectionSort(a):
    for i in range(len(a)):
        min=i
        for j in range(i+1,len(a)):
            if a[j]<a[min]:
                min=j
        a[i],a[min]=a[min],a[i]
    return a
Num=list(map(int,input("Enter all elements with spaces: ").split()))
Result=selectionSort(Num)
print("The sorted array is ",Result)