def sum(x, y):
  return x + y

print(sum(2, 3))
print(sum(3, 2) * 2)

def sum_bad(x, y):
  print(x + y)
  # this function gives back "None"

print(sum_bad(2, 3))
# print(sum_bad(3, 2) * 2) # not going to work

def sum1To(n):
  sum = 0
  # iterate through all the numbers from 1 to n
  i = 1
  while i <= n:
    sum = sum + i
    i = i + 1
  # give back the answer!
  return sum

print(sum1To(10))
print(sum1To(100) * 42)
