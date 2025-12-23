#Range : range give you a list of numbers to loops through like counting numbers without writing them all yourself
                   # (types is 3)
    #1) range(stop)-->start from zero and go upto (-1) stop
    #2) range(start,stop)--> start from start included go up to (-1) stop is not includeed
    #3) range(start , stop ,step)  -->the difference between each number (default is 1).

    #example for 1 stop only

print("1)range(stop)\n")

for i in range(5):
    print(i)   #output : 0,1,2,3,4 only because it default start from zero and stop is -1 stop num is not included
   
   #2)example start and stop

print("\nstart,stop\n")

for n in range(1,5):
    print(n)  #output is 1,2,3,4 start num is include but stop num is not include


     #3)example start , stop,step
print("\nstart,stop , step\n")
for j in range(0,10,2):
    print(j)   #output is 0,2,4,6,8 becuse step men how many value jump

    #example on backword

print("\nback word\n")
for l in range(5,1,-1):
    print(l)   #output is 5,4,3,2