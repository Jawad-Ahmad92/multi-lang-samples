class person:
    def __init__(self):
        self.name = ""
        self.age = 0

    def input_person(self):
        self.name = input("enter your name:")
        self.age = int(input("enter your age:"))

    def display_person(self):
        print("name:", self.name)
        print("age:", self.age)


class Employe(person):
    def __init__(self):
        super().__init__()
        self.salary = 0.0

    def input_Employe(self):
        self.input_person()
        self.salary = float(input("enter salary:"))

    def display_Employe(self):
        self.display_person()
        print("salary :", self.salary)


class Manager(Employe):
    def __init__(self):
        super().__init__()
        self.department = ""

    def input_manager(self):
        self.input_Employe()
        self.department = input("enter your department name:")

    def display_Manager(self):
        print("\nmanager detailed")
        self.display_Employe()
        print("department:", self.department)


obj = Manager()
obj.input_manager()
obj.display_Manager()
