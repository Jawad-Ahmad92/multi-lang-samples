#Nested condition used with in the condition 

  #example 

age=int(input("enter your age:"))
if(age>=18):
    if(age >=80):{
        print("you can not drive")
    }
    else:{
        print("you can drive")
    }
else:{
    print("you are too young for drive")
}