# __init__ function ---> constructor
# A constructor is a special function that runs automatically
# when we create an object from a class

"""
Basic Syntax:

class ClassName:
    def __init__(self, parameters):
        self.variable = parameters
"""

# Important Points (for exams):
# 1. __init__() is called automatically when object is created
# 2. It is used to initialize (store) object data
# 3. self refers to the current object
# 4. self must be the first parameter


# Creating a class (blueprint)
class Student:

    # __init__ function (constructor)
    def __init__(self, name, father, current_gpa):

        # 'self' refers to the object being created (like s1)

        # storing values inside the object
        self.name = name  # store student name
        self.father = father  # store father name
        self.current_gpa = current_gpa  # store GPA


# Creating an object of class Student
# When this line runs, __init__() is called automatically
s1 = Student("jawad", "naeem", 3.56)

# Accessing and printing object data
print("Your name is:", s1.name)
print("Your father name is:", s1.father)
print("Your GPA is:", s1.current_gpa)
