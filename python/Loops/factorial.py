num=int(input("enter a number that you want find factorial:"))

factorial=1;
for i in range(1,num+1):
    factorial *=i
print("factorial of =",num,"is",factorial)