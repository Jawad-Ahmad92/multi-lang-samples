#while---> the while loop is work if condition is false .
#syntax--> while satement
#                code

# write a code print 1 to 10

num =1
while num<=10:   # what is mean "<=" the value is less than and equal is is true above is false 
    print(num)
    num+=1
    # they print 1 to 10 all numebr


#write a code they print 10 t0 1
print("\nwrite a code they print 10 t0 1\n")
n=10
while n>=1:
    print(n)
    n -=1



#write a code that user enter number and the lenght of the table the programe him full table
print("\nwrite a code that user enter number and the lenght of the table the programe him full table\n")

table_num=int(input("enter the table integer:"))
range=int(input("enter the table end range:"))
num =1

while num<=range:
    print(table_num,"*",num,"=",num*table_num)
    num+=1
