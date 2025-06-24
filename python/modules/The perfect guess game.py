import random
import sys
print("Lets play The Perfect Guess Game")
print("Available modes: Easy(e),Medium(m),Hard(h)")
mode=str(input("Select any mode:"))
if (mode=="e"):
    print("You choose Easy mode so guess the number between 1 to 100")
elif(mode=="m"):
    print("You choose Medium mode so guess the number between 1 to 500")
else:
    print("You choose Hard mode so guess the number between 1 to 1000")
modes={
    "e":101,
    "m":501,
    "h":1001
}
num=set()
for val in range(1,modes.get(mode)):
    num.add(val)
names=[]
res=[]
min=sys.maxsize
draw=False
n=int(input("Enter no. of players: "))
winners={}
for i in range(0,n):
    comp= random.choice(list(num))
    # comp1= random.randint(1,100)
    names.append(input("Enter your name:"))
    human=int(input("Guess a number:"))
    count=0
    while 1:
        count+=1
        if(human<comp):
            human=int(input("Guess a higher one:"))
        elif(human>comp):
            human=int(input("Guess a lower one:"))
        else:
            print("You Correctly guess it")
            break
    print(names[i],"guessed the number in",count,"turns")
    
    res.append(count)
    if(res[i]<min):
        min=res[i]
        w=i
    elif(res[i]==min):
        draw=True
    print("\n")
if(draw==False):
    print("The winner is",names[w])
else:
    print("The match is draw")