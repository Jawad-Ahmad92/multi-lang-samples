# Parent class
class person:
    def __init__(self):
        # initializing person data
        self.id = 0
        self.name = ""
        self.address = ""

    def input_person(self):
        # taking input for person details
        self.id = int(input("enter your id:"))
        self.name = input("enter your name:")
        self.address = input("enter your address:")

    def display_person(self):
        # showing person details
        print("\nperson details:")
        print("id:", self.id)
        print("name:", self.name)
        print("address:", self.address)


# Child class (inherits person)
class student(person):
    def __init__(self):
        super().__init__()  # calling parent constructor
        # initializing student extra data
        self.rollno = 0
        self.marks = 0

    def input_student(self):
        # taking input for both person + student
        self.input_person()
        self.rollno = int(input("enter your rollno:"))
        self.marks = float(input("enter your marks:"))

    def display_student(self):
        # showing both person + student details
        self.display_person()
        print("\nstudent detailes:")
        print("rollnumber:", self.rollno)
        print("marks:", self.marks)


# creating object of student class
s1 = student()

# input data
s1.input_student()

# display data
s1.display_student()
