num1 = input('Enter first #: ')
num2 = input('Enter second #: ')

print(num1)
print(num2)

# print(num1 ** num2) # won't work!

# let's convert num1 to an int, and store that int right back in num1
num1 = int(num1)

# same for num2
num2 = int(num2)

print(num1, "to the power of", num2, "is", num1 ** num2) # now it'll work!
