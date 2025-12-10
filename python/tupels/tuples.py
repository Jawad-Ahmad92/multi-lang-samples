#Tupels --> are used mutiple item stor in one variable .
#they are unchangeble and un updateble . and they allow duplicate item
#one item type tuples must be comaa example tuple=("student",)-->its tuple if no comma its not tuples
#tuples item can be any dataype allowed--->example-->tuple=("apple",32,true,42)
#syntax--> tupels=("items")

    #for example
student=("adnan","ijaz","jawad","adil","naveed","adnan","khaild","salman")

print("my tuple is:",student)  #output:my tuple is: ('adnan', 'ijaz', 'jawad', 'adil', 'naveed', 'khaild', 'salman')
print("my dataype is:",type(student))  #they print "tuple" becuse they are tuple
print("length of the tuples is:",len(student)) #output : 8 becuse there 8 values

print(student[0])  #they print adnan becuse they are index number is 0
print(student[1:4])  #they print ijaz to adil becuse they are index start number include end is not

"""#example of change/update value in tuples #we add item like that"""
#how--> first we tuple transfer t list then able to change values

n=list(student)  #--syntax** of tuples change into list
n[1]="imran khan"  #they change in tuple item "ijaz" to "imran khan"
print(n) #they print all tuples item but not index 1 vlue they are change they print by those valye "imran khan"

  #-->         """method"""
#count()	Returns the number of times a specified value occurs in a tuple
#index()	Searches the tuple for a specified value and returns the position of where it was found