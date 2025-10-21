# Input number of rows and columns
r = int(input("Enter the number of rows = "))
c = int(input("Enter the number of columns = "))

m = []

print("Enter the elements row by row:")

# Take matrix input from user
for i in range(r):
    row = []
    for j in range(c):
        row.append(int(input(f"Enter element at position ({i},{j}): ")))    
    m.append(row)
print("\nOriginal Matrix:")
for row in m:
    print(row)
# Square each element
squared = []
for sublist in m:
    new_list = []
    for x in sublist:
        new_list.append(x**2)
    squared.append(new_list)

print("\nSquared Matrix:")
for row in squared:
    print(row)
