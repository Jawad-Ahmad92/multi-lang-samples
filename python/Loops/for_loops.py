#A for loop is used for iterating over a sequence (that is either a list, a tuple, a dictionary, a set, or a string).
#why we not used in for loop "i+=1"--> because for take automatically take next value 

   #for example list in for loops
print("example list in for loops")
lis=[1,3,4,2,5,6]
print(type(lis))   #output is type od lis -->class 'list'>

for i in lis: #i is used for take one element from lis
    print(i)   #out put is --> 1,3,4,2,5,6


  #for loops example on tuples

print("\nfor loops example on tuples\n")
fruit=("bananna","apple","mango","orangr","wartermelon")
print(type(fruit))  #out put is <class 'tuple'>

for n in fruit:
   print(n)  #output-->"bananna","apple","mango","orangr","wartermelon"


   #example of string in for loops

print("\nexample of string in for loops\n")
str="jawad Ahmad"
for j in str:
   print(j)  #output --> j a w a d  A h m a d