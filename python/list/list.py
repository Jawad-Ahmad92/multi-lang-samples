# list--> they are used store multipile items in one variable
"""List items are ordered, changeable, and allow duplicate values."""
#list item are index form first item index is 0 and second item index is 1 and so on...

fruit=["mango","apple","bannana","graphs","watermillon"]  #this is called list
print(fruit)


  #Access a item on his index number
print("this index number fruit is :",fruit[3])  #-->they will access graphs becaus they are 3 index number


   #range of the list 
print("this range item is:",fruit[1:4])   #-->they print range start index value and -1end index value


  #change list item-->they change the item on his index number
fruit[3]="cherry"
print(fruit[3])  #they print on index 3 value graphs remove add cherry


   #append item in list

fruit.append("append_item")   #-->in used append value
print("after append a value:",fruit)   #-->they will add append item in list

   #remove specific item on list 
fruit.remove("append_item")
print("after remove item:",fruit)

   #Remove Specified Index--->.pop()

fruit.pop(1)
print("after remove index 1:",fruit)

   #clear the list--->.clear()--->clear the list
print("after clear the list:",fruit.clear)

   