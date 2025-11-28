""" this program is usd for how to  find  the datatypes of the variables
synatx-->printtype(name-of-variable)
"""
          #output#
# name is:  <class 'str'>
#age is : <class 'int'>
#avg of the marks is:  <class 'float'>

      #code#

name =input("what is your name: ")
age =int(input("what is your age: "))
average =float(input("what is your verage of the marks: "))

print("\ndatatype of the the name,age and average\n")
print("name is: ",type(name))
print("age is :",type(age))
print("avg of the marks is: ", type(average))