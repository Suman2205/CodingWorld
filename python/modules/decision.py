import random
decision=['y','n','y','n','y','n']
y=0
n=0
for i in range(1,10000):
    if random.choice(decision)=='y':
        y+=1
    else:
        n+=1
if y>n:
    print("Confess")
else:
    print("not confess")
    