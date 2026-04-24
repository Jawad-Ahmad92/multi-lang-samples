# Access Specifiers in Python?

"""Access specifiers control who can access variables and methods in a class.

Python has 3 types:

1: public(default)--->access anywhere (no underscore name)
syntax--> self.name="ahmad" -->any where  Access

2: protected ---> access limited  (single underscore _age )
syntax--> self._age=20 -->limited  Access

3:private --> Restected (double underscore __salary)
syntax--> self.__salary=20000 -->restected
"""


# public(default)
class Test:
    def __init__(self):
        self.name = "Ali"  # public


obj = Test()
print(obj.name)  # work


# protected
class Test:
    def __init__(self):
        self._age = 20  # protected


obj = Test()
print(obj._age)  # works but not recommended


# private
class Test:
    def __init__(self):
        self.__salary = 50000  # private


obj = Test()
# print(obj.__salary) ❌ error

# access using name mangling
print(obj._Test__salary)  # works
