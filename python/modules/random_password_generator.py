import random
import string
charval=string.ascii_letters+string.digits+string.punctuation
print(type(charval))
password=''
for i in range(1,9):
    password+=random.choice(charval)
    # print(password)
print("Your eight digit password is",password)