a=int(input("Enter first number: "))
op=input("Enter operator(+,-,*,/):")
b=int(input("Enter second number: "))
match op:
    case "+":
        print("The addition of entered two numbers is ",a+b)
    case "-":
        print("The subtraction of entered two numbers is ",a-b)
    case "*":
        print("The multiplication of entered two numbers is",a*b)
    case "/":
        print("The division of entered two numbers is",a/b)
    
    