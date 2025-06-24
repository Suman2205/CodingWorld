#external module to convert text into speech
# import pyttsx3  
# engine = pyttsx3.init()
# engine.say("Hello Hello Hello Hello Hello")
# engine.runAndWait()
# module to list all directories and files in specified path
import os
print(os.getcwd())    #returns current directory path
# os.chdir("" )    # change the directory of current file
directory_path="C:\\Users\\suman\\OneDrive\\Desktop\\coding\\python\\practical"

contents=os.listdir(directory_path)

for i in contents:
    print(i,end="\n")
