#nested dictionary--> is a dictionary that inside in the dictionary are called nested dictionary

Student={          #dictionary
    "student1":{           #---> Nested dictionary 
        "name":"jawad ahmad",
        "roll_no":4,
        "program":"Artifical intelligence",
        "age":19,
    },

    "student2":{             #---> 2 Nested dictionary 
        "name":"ijaz ahmad",
        "roll_no":42,
        "program":"Doctor of veternary midicen",
        "age":21,
    }

}
print("first student data\n")
print(Student["student1"])  #they print student1 all values

print("\nsecond student data")
print(Student["student2"])   #they print student2 all values