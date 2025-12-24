def simple_calculator(num1, num2, operator):

    if operator == '+':
        result = num1 + num2

    elif operator == '-':
        result = num1 - num2

    elif operator == '*':
        result = num1 * num2

    elif operator == '/':
        if num2 == 0:
            return "Error: Division by zero not allowed"
        result = num1 / num2

    else:
        return "Error: Invalid operator"

    return result  


print("\nSimple Calculator (+, -, *, /)")

first_num = float(input("Enter first number: "))
second_num = float(input("Enter second number: "))
op = input("Enter operator (+, -, *, /): ")

final_result = simple_calculator(first_num, second_num, op)

print("Result is:", final_result)
