import turtle
import random

turtle.shape('turtle')
turtle.speed('fastest')

colors = ['red', 'orange', 'yellow', 'green', 'blue', 'purple']

i = 1
while i <= 50:
  # draw a square with a random side length and a random color
  random_index = random.randint(0, len(colors) - 1)
  turtle.fillcolor(colors[random_index])
  
  turtle.up() # pick the turtle up
  # pick a random starting x & y coordinate
  starting_x = random.randint(-300, 300)
  starting_y = random.randint(-300, 300)
  # move the turtle there
  turtle.goto(starting_x, starting_y)
  # put the turtle back down
  turtle.down()

  # pick a random side length for our square
  square_side_length = random.randint(50, 200)

  # actually draw the square
  turtle.begin_fill() # fill in (with the fillcolor) the following shape
  turtle.forward(square_side_length)
  turtle.left(90)
  turtle.forward(square_side_length)
  turtle.left(90)
  turtle.forward(square_side_length)
  turtle.left(90)
  turtle.forward(square_side_length)
  turtle.end_fill() # I'm done drawing, please fill in my shape Mr. Turtle

  i = i + 1 # advance i




