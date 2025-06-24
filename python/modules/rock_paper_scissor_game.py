game={"r","p","s"}
naming={
    "r":"Rock",
    "p":"Paper",
    "s":"Scissor"
}
human=input("Enter your move:")
print("You choose:",naming.get(human))
comp=game.pop()
print("Computer choose:",naming.get(comp))
Rule={
    "r":1,
    "p":-1,
    "s":0
}
res=(Rule[human]-Rule[comp])
if(res==1 or res==-2):
    print("You Win")
elif(res==-1 or res==2):
    print("You Lose")
else:
    print("Match Draw")