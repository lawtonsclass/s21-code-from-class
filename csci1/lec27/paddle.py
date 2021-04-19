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

# draw our "screen"
drawRectangle((-200, 200), 400, 400, "black")

# make the turtle into a square
turtle.shape('square')

# change the fill color to change the ball's color
turtle.fillcolor('pink')

# make the turtle larger
turtle.turtlesize(1.5, 6)

turtle.up()
turtle.goto(-170, 0)

# let's have the Up key move the paddle up and the Down key
# move the paddle down!

def moveUp():
  (x, y) = turtle.pos()
  newY = y + 10

  if newY > 140: # if we're trying to go past the top
    newY = 140 # stop at the top
  
  turtle.goto(x, newY)

def moveDown():
  (x, y) = turtle.pos()
  newY = y - 10

  if newY < -140: # if we're trying to go past the bottom
    newY = -140 # stop at the bottom
  
  turtle.goto(x, newY)

# calls the function moveUp whenever the Up key is pressed
turtle.onkeypress(moveUp, "Up")
turtle.onkeypress(moveDown, "Down")
turtle.listen() # start listening & responding to key presses
