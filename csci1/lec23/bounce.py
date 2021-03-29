import turtle
import random

turtle.shape('turtle')
turtle.speed('fastest')

def drawRectangle(ul, w, h, color):
  turtle.pencolor(color)
  # move the turtle to ul
  turtle.up()
  turtle.goto(ul[0], ul[1])
  turtle.down()
  # face the turtle east
  turtle.seth(0)
  # forward w
  turtle.forward(w)
  # turn right 90
  turtle.right(90)
  # forward h
  turtle.forward(h)
  # turn right 90
  turtle.right(90)
  # forward w
  turtle.forward(w)
  # turn right 90
  turtle.right(90)
  # forward h
  turtle.forward(h)

# draw our "screen"
drawRectangle((-200, 200), 400, 400, "black")

# make the turtle into a bll
turtle.shape('circle')

# change the fill color to change the ball's color
turtle.fillcolor('pink')

# make the turtle larger
turtle.turtlesize(2, 2)

# move the turtle into the top middle of our "screen"
turtlewidth = 40
# turtle_x = 0
# instead of 0 let's start the turtle's x at a random location
turtle_x = random.randint(-100, 100)
turtle_y = 200 - turtlewidth/2

turtle.up()
turtle.goto(turtle_x, turtle_y)

turtle_offset = -5 # the larger the abs val of the offset, the faster

while True: # forever, do the following...
  # change the turtle's y coordinate
  turtle_y = turtle_y + turtle_offset

  # check if we hit a wall, and bounce if we did
  top_y = 200 - turtlewidth/2
  bottom_y = -200 + turtlewidth/2
  if turtle_y > top_y:
    # move the turtle down to the top
    turtle_y = top_y
    # change his direction to be the opposite one
    turtle_offset = turtle_offset * -1
  if turtle_y < bottom_y:
    # move the turtle up to the bottom
    turtle_y = bottom_y
    # change his direction to be the opposite one
    turtle_offset = turtle_offset * -1
  
  # redraw the turtle at the new (x, y) location
  turtle.goto(turtle_x, turtle_y)

