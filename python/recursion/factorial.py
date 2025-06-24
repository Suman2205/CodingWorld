def rec_cal_fact (n):
    if n==0 or n==1:
        return 1
    return n*rec_cal_fact(n-1)
n=int(input("Enter any number:"))
print(rec_cal_fact(n))