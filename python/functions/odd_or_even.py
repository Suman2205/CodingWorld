n=int(input("Enter any number:"))
def odd_or_even(n):
    if(n%2==0):
        return "EVEN"
    else:
        return "ODD"
output=odd_or_even(n)
print(output)