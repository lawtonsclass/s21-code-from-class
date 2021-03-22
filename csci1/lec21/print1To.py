# definition of the print1To function
def print1To(n):
  # use the parameter n to print from 1 to n
  for i in range(1, n+1):
    print(i)


# we can use the function by calling it with actual arguments

print1To(5)

print()

x = 7
print1To(x)

print()

y = min(2, 3)
print(y)
print(min(2, 3) + 1)

z = print("hi mom")
print(z)
