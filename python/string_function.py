         #"""startswith"""-->check if the string start with the given letters

str="hello world"
print(str.startswith("hello"))
#output is true 

           #"""endswith""" -->check if the string end with those letter

txt="i am coder"
print(txt.endswith("coder"))  #output is true

     #""""count"""-->counts how many time a letter are used in string

word="i am am a coder"
print(word.find("am"))  # output is 2 becuse instring am is two time used

     #"""capatilized"""-->make the first letter big and rest small

star="i am coder"
print(star.capitalize())  #output is I am coder

      #"""find"""-->it look fot the first place a word or letter appear in the string and tell you its index(position)

text="i am coder"
print(text.find("am")) #output is 2


     #"""Replace"""-->it replace all parts of the string that musch "old" with "new"

tet="i is a coder"
print(tet.replace("is","am"))  #output is i am a coder