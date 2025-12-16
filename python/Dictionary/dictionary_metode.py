student = {
    "name": "Jawad",
    "age": 21,
    "course": "AI",
    "city": "Mardan"
}

        #   Methods

print("my all keys is: ",student.keys())  #return all keys
print("all values is",student.values())   #return all values
print("key , values ",student.items())   #return all (key,val) pair as tuples
print("return key according to values is:",student.get("course"))  #return the key according to the values
student.update({"gpa": 3.5})
print("new dictionary is:", student) # insert the specific element to the dictionary