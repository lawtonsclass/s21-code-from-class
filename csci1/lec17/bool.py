b = True
print(b)
print(type(b))

x = 10
y = 5
b = x > y
print(b)

x = 5
y = 10
b = x > y
print(b)

print("x == 5:", x == 5)
print("x != y:", x != y)

age = 14
height = 44
# you can combine boolean expressions with and/or
print("Can ride the ride: ", age > 12 and height > 48)
print("Can ride the ride: ", age > 12 or height > 48)

print(not (age > 12))

# make sure the age is always an int
age = int(input('Enter your age: '))
if age >= 18:
  # the lines below only execute if the condition is True
  print("You are an adult!")
  print("Woo!!!")

print("Rest of code goes down here")

print()

if age >= 18:
  # the lines below only execute if the condition is True
  print("You are an adult!")
  print("Woo!!!")
else:
  print("You are a child!")
  print("Woo!!!!")
