import random

darts_inside_circle = 0

# throw 10 million darts
for i in range(10000000):
  # (x, y) represents one dart throw
  x = random.uniform(-1, 1)
  y = random.uniform(-1, 1)

  inside_the_circle = x**2 + y**2 <= 1

  if inside_the_circle:
    darts_inside_circle = darts_inside_circle + 1

print(darts_inside_circle / 10000000 * 4)
