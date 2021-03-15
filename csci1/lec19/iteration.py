i = 1 # start i at 1

while i < 11:
  # repeatedly, print i and increment i
  print(i)
  i = i + 1

print()

i = 10
while i >= 1:
  # repeatedly, print i and decrement i
  print(i)
  i = i - 1

print()

i = 1
sum = 0
while i < 11:
  # add the current i into sum
  sum = sum + i
  i = i + 1

print("The sum of all the numbers from 1 to 10:", sum)

print()

L = [1, 2, 3, 4, 5]
# let's iterate through all the indices of L
j = 0
while j <= len(L) - 1:
  # do something with L[j]...
  print("L at index", j, "is:", L[j])
  j = j + 1
