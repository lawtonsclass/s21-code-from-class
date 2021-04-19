import turtle
import random
import math

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

def bounce_if_hit_wall():
  # we have to tell python that the vars we're about to check
  # exist outside the function
  # vars that exist outside functions are called "global" vars
  global turtle_y, top_y, turtle_x, bottom_y, offset_x, offset_y
  
  if turtle_y > top_y: # hit the top wall
    # move the turtle down to the top
    turtle_y = top_y
    # invert the turtle's y direction
    offset_y = offset_y * -1
    
  if turtle_y < bottom_y: # hit the bottom wall
    # move the turtle up to the bottom
    turtle_y = bottom_y
    # invert the turtle's y direction
    offset_y = offset_y * -1

  if turtle_x < left_x:
    # move the turtle back to the edge on the left
    turtle_x = left_x
    # invert the turtle's x direction
    offset_x = offset_x * -1

  if turtle_x > right_x:
    # move the turtle back to the edge on the right
    turtle_x = right_x
    # invert the turtle's x direction
    offset_x = offset_x * -1

# draw our "screen"
drawRectangle((-200, 200), 400, 400, "black")

# make the turtle into a square
turtle.shape('square')

# change the fill color to change the ball's color
turtle.fillcolor('pink')

# make the turtle larger
turtle.turtlesize(2, 2)

# move the turtle into a random spot inside the bounding box
turtlewidth = 40
turtle_x = random.randint(-180, 180)
turtle_y = random.randint(-180, 180)
turtle.up()
turtle.goto(turtle_x, turtle_y)

# pick a random starting direction for our turtle
# i.e., pick x & y offsets for the turtle
# those offsets will represent the x direction and the y direction
offset_x = random.uniform(-1.0, 1.0)
offset_y = random.uniform(-1.0, 1.0)
# normalize offset_x and offset_y to be of length 1 (when considered together)
factor = math.sqrt(offset_x**2 + offset_y**2)
offset_x = offset_x / factor
offset_y = offset_y / factor
# make the turtle go faster by making the direction arrow's
# length larger
offset_x = offset_x * 3
offset_y = offset_y * 3


# now, moving the turtle by (offset_x, offset_y) will move him 1 unit in
# his current direction

while True: # forever, do the following...
  # move the turtle in his current direction
  # change the turtle's x & y coordinates
  turtle_x = turtle_x + offset_x
  turtle_y = turtle_y + offset_y

  # figure out where the walls are
  top_y = 200 - turtlewidth/2 # top wall's y coordinate
  bottom_y = -200 + turtlewidth/2 # bottom wall's y coord
  right_x = 200 - turtlewidth/2 # right wall's x coordinate
  left_x = -200 + turtlewidth/2 # left wall's x coord

  # check if we hit a wall, and bounce if we did
  bounce_if_hit_wall()
  
  # redraw the turtle at the new (x, y) location
  turtle.goto(turtle_x, turtle_y)

