"""del keyword in Python

It is used to remove/delete something from memory or a container.
"""

#  Delete a variable
x = 10
del x
print(x)  # Error: x is not defined

#   Delete list item
nums = [10, 20, 30]
del nums[1]
print(nums)  # [10, 30]

#  Delete a slice from list
nums = [1, 2, 3, 4, 5]
del nums[1:4]
print(nums)  # [1, 5]

#   Delete dictionary key
data = {"name": "Jawad", "age": 20}
del data["age"]
print(data)  # {'name': 'Jawad'}
