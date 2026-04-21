# Dictionary-->it is used to store data values in key : value pairs
# they are unordered , mutaue (changebal) and dont allow duplicate key

dict = {
    "name": "jawad ahmad",
    "gpa": 3.5,
    "marks": [78, 87, 90, 87],  # we store list and tuples alway in dictionary
}
print(dict)  # they print all values
print(dict["name"])  # they print only jawad ahmad
print(dict["marks"])  # they print only [78,87,90,87]


# Example

student = {
    "name": "Jawda Ahamd",
    "father_name": "M.Naeem",
    "university": "Abdul wali kkhan uni of mardan",
    "c_gpa": 3.36,
}

print("student details:", student)
print(student["name"])
print(student["father_name"])
print(student["university"])
print(student["c_gpa"])
