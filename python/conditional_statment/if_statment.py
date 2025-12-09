#if_statment will be exicute if condition is true

age=int(input("enter your age:"))
if(age>=18):
    print("you are eligible for vote")  #output if you enter greater than are equall then 18 your age the condition is true
else:{
        print("you are not eligible for vote")
    }                                  #if you enter less than 18 your age so conditional false this line print

  #example 2

num=int(input("enter a integer:"))
if(num>0):
    {
        print("the number is positive")
    }  #in this code you  enter a number greater than zero the program will be exicute
else:{
        print("the number is negative or zero")
    }

  #example 3

num1=int(input("enter a number:"))
num2=int(input("enter a second nuber:"))
if(num1>num2):{
    print("num1 is greater than num2:",num1)
}
else:{
    print("num2 is gretear than num1:",num1)
}
   
   #example 4