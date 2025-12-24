# built in function---> its is a keyword that have already in python . for spacific task not very important
#for example
"""
Category	      Examples
Input/Output	print(), input()
Type	        int(), float(), str(), type()
Math	        sum(), max(), min(), abs()
Sequence	    len(), range(), sorted()
Utility     	help(), dir(), id()
"""
# print()
print("hello programmer")

# input()
# name = input("Enter name: ")
# print(name)

# type()
x = 10
print(type(x))

# len()
name = "Jawad"
print(len(name))

# int()
a = "25"
print(int(a))

# float()
b = "3.14"
print(float(b))

# str()
c = 100
print(str(c))

# sum()
nums = [1, 2, 3, 4]
print(sum(nums))

# max()
print(max(nums))

# min()
print(min(nums))

# abs()
print(abs(-50))

# round()
print(round(4.6))

# range()
for i in range(1, 6):
    print(i)

# sorted()
nums2 = [5, 2, 9, 1]
print(sorted(nums2))

# bool()
print(bool(0))
print(bool(1))

# enumerate()
names = ["Ali", "Jawad", "Sara"]
for i, n in enumerate(names):
    print(i, n)

# zip()
ages = [20, 21, 22]
print(list(zip(names, ages)))

# id()
print(id(x))

# dir()
print(dir(str))

# help()
# help(print)

# any()
print(any([0, False, 1]))

# all()
print(all([1, True, 5]))

# pow()
print(pow(2, 3))

# divmod()
print(divmod(10, 3))

# reversed()
print(list(reversed(nums2)))

# slice()
s = slice(1, 4)
print(nums2[s])

# isinstance()
print(isinstance(x, int))
