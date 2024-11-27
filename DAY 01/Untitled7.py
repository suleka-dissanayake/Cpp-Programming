import datetime
print (datetime.datetime.now())
try:
    name = input ("Enter your name :- ")
    age = int(input("Enter your age :- "))
    print("Hi",name,"!","you're",age,"years old !")
except ValueError :
    print ("Invalid input !")
exit()
