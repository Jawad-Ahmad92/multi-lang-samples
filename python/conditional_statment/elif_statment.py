# elif statment is used for -->the code will be exicute if condition1 is false and condition2 is true
# example 1
num = int(input("1:red\n2:yellow\n3:green\nenter a signal light number "))

if num == 1:
    {print("stop")}  # if you enter 1 the signal show red light mean stop
elif num == 2:
    {  # elif-->mean if first condition is not true the second condition check
        print("wait...")  # if you enter 2 the signal show yallow light mean wait
    }
elif num == 3:
    {  # elif-->mean if first and second condition is not true the third condition check
        print("Go")  # if you enter 3 the signal show green light mean go
    }
else:
    {
        print(
            "invalid number "
        )  # else --> mean if no one condition is true so else condition will be exicute
    }

# exmaple
num1 = int(input("enter your first integer:"))
num2 = int(input("enter your second integer:"))
num3 = int(input("enter your third integer:"))

if num1 > num2 and num1 > num3:
    print("num1 is greater")
elif num2 > num1 and num2 > num3:
    print("num2 is greater")
else:
    print("num3 is greater")

    # example

    marks = float(input("enter your marks:"))

if marks >= 90:
    print("grade=A")
elif marks >= 80:
    print("grade =B")
elif marks >= 70:
    print("garde=C")
elif marks >= 60:
    print("gardeD")
else:
    print("fail")


# example leap year

year = int(input("enter a year:"))
if year % 4 == 0:
    print("leap year")
else:
    print("not leap year")
