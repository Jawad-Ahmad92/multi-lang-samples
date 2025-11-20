
# second cheak the first number squre is equall of second number

integer1=float(input("enter you first num:"))
integer2=float(input("enter you second num:"))

if integer1*integer1==integer2:
    print("first number are squrw of the second number:")
else:
    print("not squre of of the first number")

    # third cheak first int are equall seconf int

    
integer1=float(input("enter you first num:"))
integer2=float(input("enter you second num:"))

if integer1==integer2:
    print("both number are equall")
else:
    print("not equall")

    # four cheak if you are pass are fail


    marks=int(input("enter youyr marks:"))

if marks>=40:
    print("congratulation you are passd")
else:
    print("sorry try again you are fail.")

    # five cheak you areeligibal for vote?


    age=int(input("enter youyr age:"))

if age>=18:
    print("you are eligible for vote")
else:
    print("you are not eligibale for vote")

    # six find the elictricity bill by his condition

    unit=int(input("enter your units:"))
bill=0.0

if(unit>500):
    bill=unit*7
elif(unit>300):
    bill=unit*5
else:
    bill=unit*2

bill += 150
if(bill>2000):
    bill = bill+(bill*5.0)/100.0

print("your total bill is :",bill)

    # seven find your net salary 

salary=int(input("enter your salary:"))
net_salary=0.0

if(salary>20000):
    net_salary=salary-7/100.0
elif(salary>10000):
    net_salary=salary-1000
else:
    net_salary=salary

print("your net salary",net_salary)


#  find smallest number
num1=float(input("enter first integer:"))
num2=float(input("enter second integer:"))
num3=float(input("enter third integer:"))

if num1 < num2:
    if num1 < num3:
        print("num1 is smallest number")
    else:
        print("num3 is smallset number")

if num2<num1:
    if num2<num3:
        print("num2 is smallest number")
    else:
        print("num3 is smallest number")
        


        # if all number are equall or not 

num1=float(input("enter first integer:"))
num2=float(input("enter second integer:"))
num3=float(input("enter third integer:"))

if num1==num2:
    if num1==num3:
        print("yes all number are equall")
    else:
        print("NO all number are not equall")
else:
    print("not equall")

    # cheack number is positive or not 

num1=float(input("enetr a number: "))

if (num1>0):
    print("positive")
elif (num1==0):
    print("zero")
else:
    print("negative")

    # cheack the temp 

temp=float(input("enetr a temprature: "))

if temp>30:
    print("HOT day")
else:
    print("COOL day")

    # find the geater number 

num1=float(input("enter first integer:"))
num2=float(input("enter second integer:"))
num3=float(input("enter third integer:"))

if num1>num2:
    if num1>num3:
        print("num1 is greater number:",num1)
    else:
        print("num3 is greater number:",num3)

if  num2>num1:
    if num2 >num3:
        print("num2 is greater number:",num2)
    else:
        print("num3 is greater number:",num3)

        # cheack the number is divisible by 3 and 5 

num=int(input("enter a number:"))

if (num%3==0) and (num %5 ==0):
    print("yes it divisiable")
else:
    print("no its not diviable")

    # cheack the password is correct are not 

password=input("enetr a password :")

code="admin123"
if password== code:
    print("Access granted")
else:
    print("Access denied")

    # cheack leap year

year=int(input("enetr a year :"))

if year%4==0:
    if year%100==0:
        if year%400==0:
            print("its leap year", year)
        else:
            print("no its not leap year", year)
    else:
        print("leap year")
else:
    print("no its not leap year", year)

    #  cheack student passed or fail

phy=float(input("enetr your physics marks:"))
maths=float(input("enetr your maths marks:"))
chem=float(input("enetr your chemistry marks:"))

avg=(phy+maths+chem)/3
print("average is", avg)

if (avg>=40):
    print("congrates you are passed")
else:
    print("sorry you are fail.try again")

    # ATM SIMULATION 

PIN=input("enter you PIN: ")
correct_pin="123"
balance=5000

if PIN==correct_pin:
    ammount=float(input("enter you withdrawal amount:"))
    if ammount<=balance:
        balance -= ammount
        print("withdrawal ammount is succesfully! your current amont in account" , balance)
    else:
        print("insufficient balance")
else:
    print("incorrect password")
     