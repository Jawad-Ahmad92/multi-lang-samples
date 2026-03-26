# Step 1: Create or open a file in write mode
# 'w' mode creates the file if it does not exist
file = open("student.txt", "w")

# Step 2: Write data into the file
file.write("Name: Jawad\n")
file.write("Course: AI\n")
file.write("University: AWKUM\n")

# Step 3: Close the file after writing
file.close()


# Step 4: Open the same file in read mode
file = open("student.txt", "r")

# Step 5: Read the content of the file
content = file.read()

# Step 6: Print the file content
print("File Data:")
print(content)

# Step 7: Close the file
file.close()


# Step 8: Open file in append mode to add new data
file = open("student.txt", "a")

# Step 9: Add new line to the file
file.write("Department: Computer Science\n")

# Step 10: Close the file again
file.close()