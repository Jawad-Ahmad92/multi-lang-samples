#function-->instead of writing the same code again and again you put it inside thr function then...
#... call the function anytime you need it. in python we define a function in def words.
  # python have two types function 1) built_in function (2) user define fnction

#syntax--> def my_function_name():

print("find maximmum number:")

def max(a,b):        #def--> is heyword that define function.
                     # max--> is function name . 
                     # (a,b)--> parameter .
                     # : --> is used for start function body
    if a>b:
        print("maximum number is:",a)
    else:
        print("maximum number is: ",b)

num1=int(input("enter a number:"))
num2=int(input("enter a number:"))

max(num1,num1)     #-->call the function

