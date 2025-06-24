game={"s","g","w"}
naming={
    "s":"Snake",
    "g":"Gun",
    "w":"Water"
}
human=input("Enter your move:")
print("You choose:",naming.get(human))
comp=game.pop()
print("Computer choose:",naming.get(comp))
Rule={
    "s":1,
    "g":-1,
    "w":0
}
res=(Rule[human]-Rule[comp])
if(res==1 or res==-2):
    print("You Win")
elif(res==-1 or res==2):
    print("you Lose")
else:
    print("Match Draw")
# if (human=="s" and comp=="w"):
#     print("You Win")
# elif(human=="w"and comp=="g"):
#     print("You Win")
# elif(human=="s"and comp=="g"):
#     print("You Lose")
# elif(human=="w" and comp=="s"):
#     print("You Lose")
# elif(human=="g"and comp=="s"):
#     print("You Win")
# elif(human=="g"and comp=="w"):
#     print("You Lose")
# else:
#     print("Match Draw")