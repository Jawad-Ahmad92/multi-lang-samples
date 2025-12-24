#user define function --> i a function that coder write for your self.
#steps-->A function has 3 steps:Define the function.Call the function.Function runs.

# user defined function (no parameter)
def greet():
    print("hello programmer")

greet()


# user defined function (with parameter)
def greet_name(name):
    print("hello", name)

greet_name("Jawad")


# user defined function (with return)
def add(a, b):
    return a + b

result = add(5, 3)
print(result)


# user defined function (default parameter)
def welcome(name="User"):
    print("Welcome", name)

welcome()
welcome("Jawad")


# user defined function (multiple parameters)
def multiply(x, y, z):
    print(x * y * z)

multiply(2, 3, 4)


# user defined function (user input)
def square():
    n = int(input("Enter number: "))
    print(n * n)

# square()


# user defined function using *args
def total(*numbers):
    print(sum(numbers))

total(1, 2, 3, 4, 5)


# user defined function using **kwargs
def student(**info):
    print(info)

student(name="Jawad", age=21, course="AI")


# empty user defined function
def future_function():
    pass
