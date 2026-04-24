# static method (@staticmethod)-->
# if we declare a function but donot write self so we first declare it a static method

"""class MyClass:
@staticmethod
def my_method(args):
    # no self or cls parameter
    return something"""

# proble:Banksystem utility


class BankAccount:
    def __init__(self, Owner, Balance):
        self.Owner = Owner
        self.Balance = Balance

    def display(self):
        print("Owner is:", self.Owner)
        print("balance detailes:", self.Balance)

    @staticmethod  # static method
    def validate_deposit(amount):
        if amount > 0:
            print("True")
        else:
            print("False")

    @staticmethod  # static method
    def transfer_fee(amount):
        return amount * 0.02


obj = BankAccount("jawad", 10000)
obj.display()
BankAccount.validate_deposit(100)
print(BankAccount.transfer_fee(1000))


#      2nd example
# Problem: Student Grade Checker

print("\nStudent Grade Checker\n")


class Student:
    def __init__(self):
        self.name = ""
        self.grade = 0

    def input(self):
        self.name = input("enter your name:")
        self.grade = int(input("enter yor grade/marks:"))

    def display_student(self):
        print("student name:", self.name)
        print("garde is:", self.grade)

    @staticmethod  # static method
    def is_passing(grade):
        return grade >= 50

    @staticmethod  # static method
    def letter_grade(grade):
        if grade >= 90:
            print("grade:A")
        elif grade >= 80:
            print("grade:B")
        elif grade >= 70:
            print("grade:C")
        elif grade >= 50:
            print("grade:D")
        else:
            print("grade:F")


st = Student()
st.input()
st.display_student()
print(Student.is_passing(st.grade))
Student.letter_grade(st.grade)
