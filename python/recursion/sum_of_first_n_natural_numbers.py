n=int(input("Enter number upto which you want to calculate total sum:"))
def cal_sum(n):
    if (n==1):
        return 1
    return n+cal_sum(n-1)
print("The total sum upto ",n,"is",cal_sum(n))