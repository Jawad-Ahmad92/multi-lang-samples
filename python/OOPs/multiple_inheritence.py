class Father:
    def __init__(self):
        self.father_name = ""

    def input_father(self):
        self.father_name = input("enter father name:")

    def display_father(self):
        print("father name is:", self.father_name)


class Mother:
    def __init__(self):
        self.mother_name = ""

    def input_mother(self):
        self.mother_name = input("enter mother name:")

    def display_mother(self):
        print("mother name:", self.mother_name)


class child(Father, Mother):
    def __init__(self):
        Father.__init__(self)
        Mother.__init__(self)
        self.child_name = ""

    def input_child(self):
        self.input_father()
        self.input_mother()
        self.child_name = input("enter child name:")

    def display_child(self):
        print("\nchild detaild")
        self.display_father()
        self.display_mother()
        print("child name is:", self.child_name)


obj = child()
obj.input_child()
obj.display_child()


#            2nd example on multiple inheritence

print("\n2nd example on multiple inheritence\n")


class Course:
    def __init__(self):
        self.course_name = ""

    def input_course(self):
        self.course_name = input("enter your course name:")

    def display_course(self):
        print("course name:", self.course_name)


class Marks:
    def __init__(self):
        self.marks = 0

    def input_marks(self):
        self.marks = int(input("enter your marks:"))

    def display_marks(self):
        print("marks is:", self.marks)


class Result(Course, Marks):
    def __init__(self):
        Course.__init__(self)
        Marks.__init__(self)
        self.student_name = ""

    def input_result(self):
        self.input_course()
        self.input_marks()
        self.student_name = input("enter your name:")

    def display_result(self):
        print("\nStudent info:")
        self.display_course()
        self.display_marks()
        print("student name:", self.student_name)


obj1 = Result()
obj1.input_result()
obj1.display_result()
