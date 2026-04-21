class student:
    def __init__(self, name, rollno, marks):
        self.name = name  # store student name
        self.rollno = rollno  # store roll number
        self.marks = marks  # store marks

    def display_info(s):
        # show student details
        print("name is:", s.name)
        print("rollno is:", s.rollno)
        print("marks is:", s.marks)

    def check_result(s):
        # check pass or fail based on marks
        if s.marks >= 50:
            print("you are pass:", s.marks)
        else:
            print("you are fail:", s.marks)


# first student object
std = student("jawad", 4, 98)
print("first student information")
std.display_info()  # show first student data
std.check_result()  # check result

print("\nsecond student information")

# second student object
std1 = student("ijaz", 43, 49)
std1.display_info()  # show second student data
std1.check_result()  # check result
