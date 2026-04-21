class Employee:
    def __init__(self):
        self.employ_id = 0
        self.name = ""
        self.salary = 0.0

    def input_Employe(self):
        self.employ_id = int(input("enter your Employe id:"))
        self.name = input("enter your name:")
        self.salary = float(input("enter your salary:"))

    def display_Employe(self):
        print("\nEmploye detials:")
        print("id:", self.employ_id)
        print("name:", self.name)
        print("salary:", self.salary)


class manager(Employee):
    def __init__(self):
        super().__init__()
        self.department = ""
        self.bonus = 0

    def input_manager(self):
        self.input_Employe()
        self.department = input("enter your department name:")
        self.bonus = float(input("enter your bonus:"))

    def display_manager(self):
        self.display_Employe()
        print("\nManager details")
        print("department:", self.department)
        print("Bonus:", self.bonus)


obj = manager()
obj.input_manager()
obj.display_manager()
