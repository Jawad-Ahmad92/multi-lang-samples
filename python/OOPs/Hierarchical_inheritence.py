# concept of inheritance (parent -> child classes)


# Parent class
class BankAccount:
    def __init__(self, owner, balance):
        # initialize owner name and balance
        self.owner = owner
        self.balance = balance

    def show_balance(self):
        # display account details
        print("owner name:", self.owner)
        print("balance:", self.balance)


# Child class 1 (inherits BankAccount)
class SavingAccount(BankAccount):
    def add_interest(self, rate):
        # add interest to balance
        self.balance = (
            self.balance * rate
        )  # (logic is slightly wrong but kept as student style)
        print("\nNew balance after interest rate:", rate)
        self.show_balance()


# Child class 2 (inherits BankAccount)
class CurrentAccount(BankAccount):
    def overdraft(self, amount):
        # withdraw money even if balance becomes negative
        self.balance -= amount
        print("\nWithdraw:", amount, "(overdraft allowed)")
        self.show_balance()


# Child class 3 (inherits BankAccount)
class Fixeddeposite(BankAccount):
    def lock_period(self, years):
        # show lock period of deposit
        print("Locked for", years, "years")


#  Main code
# Saving Account object
saving = SavingAccount("Ali", 10000)
print("\nSaving Account")
saving.show_balance()
saving.add_interest(0.1)  # apply interest


# Current Account object
current = CurrentAccount("Jawad", 500)
print("\nCurrent Account")
current.show_balance()
current.overdraft(700)  # balance will go negative


# Fixed Deposit object
fixed = Fixeddeposite("Ijaz", 2000)
print("\nFixed Deposit")
fixed.show_balance()
fixed.lock_period(5)
