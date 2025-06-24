def make_matrix():
    arr=[]
    n=int(input("Enter no. of rows in matrix: "))
    m=int(input("Enter no. of columns in matrix: "))
    print("Enter all elements: ")
    arr=[]
    for i in range(n):
        l=[]
        for j in range(m):
            l.append(int(input()))
        arr.append(l)
    return arr
def dis(arr):
        for i in range(len(arr)):
            for j in range(len(arr[i])):
                print(arr[i][j],end=" ")
            print(end="\n")
A=make_matrix()
dis(A)
B=make_matrix()
dis(B)
def multiplication(a,b):
    ans=[]
    if(len(a[0])!=len(b)):
        ans=None
        return ans
    else:
        for i in range(len(a)):
            l=[]
            for j in range(len(b[0])):
                c=0
                for k in range(len(b)):
                    c=c+(a[i][k]*b[k][j])
                l.append(c)
            ans.append(l)
    return ans
ans=multiplication(A,B)
if ans!=None:
    print("The result array: ",end="\n")
    dis(ans)
else:
    print("The matrix multiplication is not possible")

