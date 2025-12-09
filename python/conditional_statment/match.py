# match-->The match statement is used to perform different actions based on different conditions.

number =int(input("enter 1 to 7 number:"))

match number:
    case 1:
        print("sunday")
    case 2:
        print("monday")
    case 3:
        print("tuesday")
    case 4:
        print("wednesday")
    case 5:
        print("Tursday")
    case 6:
        print("friday")
    case 7:
        print("saturday")


        #Default value code example
#Use the underscore character _ as the last case value if you want a code block to execute when there are not other matches:

day=int(input("enter a integer"))

match day:
    case 1:
        print("This is sunday ")
    case 2:
        print("this is friday")
    case _:
        print("wait...")   #The value _ will always match, so it is important to place it as the last case to make it behave as a default case.

    #exampl

number=(input("enter a letter :"))

match number:
    case 'a' | 'A':
        print("its vowel")
    case 'e' | 'E':
        print("its vowel")
    case 'i' | 'I':
        print("its vowel")
    case 'o' | 'O':
        print("its vowel")
    case 'u' | 'U':
        print("its vowel")
    case _:
        print("its not vowel")