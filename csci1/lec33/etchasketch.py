import turtle
import random

while -300 <= turtle.xcor() <= 300 and -300 <= turtle.ycor() <= 300:
  random_length = random.randint(10, 50)
  random_angle = random.choice([0, 90, 180, 270])

  # move by the random length
  turtle.forward(random_length)
  # turn in the random direction
  turtle.left(random_angle)
