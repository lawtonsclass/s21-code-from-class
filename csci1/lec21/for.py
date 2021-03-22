L = [4, 5, 6, 7, 8, 9, 11, 100]

# let's *iterate through* L with a for loop!

for x in L:
  # x gets set to all elements of L in order
  print(x)

print()

# the above is equivalent to
i = 0
while i <= len(L) - 1:
  print(L[i])
  i = i + 1

##########
# ranges #
##########

print()

# print #s from 1 to 10 using a range
for y in range(1, 11):
  print(y)

print()

# 0 - 99
for y in range(100):
  print(y)
