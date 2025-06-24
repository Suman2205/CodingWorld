def calculator(a,op,b):
    if op=='+':
        return a+b
    elif op=='-':
        return a-b
    elif op=='*':
        return a*b
    elif op=='^':
        return a**b
    elif op=='/':
        if b==0:
            return "Not Defined"
        else:
            return a/b
    else:
        return "Invalid Operator. Please enter valid operator"
while True:
    try:
        a=int(input("Enter first integer number:"))
        op=input("Enter operand(+,-,*,/,^):") 
        b=int(input("Enter second integer number: "))
    except ValueError:
        print("Please enter valid input(number)")
        continue
    print("The value of ",a,op,b," is ",calculator(a,op,b))
    query=input("Enter Y for next calculation if any otherwise enter N:")
    if query=='Y':
        continue
    else:
        break