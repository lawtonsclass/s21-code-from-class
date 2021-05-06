import turtle
import random

def drawSquare(center, width, color):
  turtle.up()
  (center_x, center_y) = center
  turtle.goto((center_x - width/2, center_y + width/2))
  turtle.fillcolor(color)
  
  turtle.begin_fill()

  # draw the square
  turtle.setheading(0)
  turtle.forward(width)
  turtle.right(90)
  turtle.forward(width)
  turtle.right(90)
  turtle.forward(width)
  turtle.right(90)
  turtle.forward(width)

  turtle.end_fill()

def drawCircle(center, radius, color):
  turtle.up()
  (center_x, center_y) = center
  turtle.goto((center_x, center_y - radius))
  turtle.fillcolor(color)
  
  turtle.begin_fill()

  # draw the square
  turtle.circle(radius)

  turtle.end_fill()

def drawTargetLogo(drawFunc, size):
  drawFunc((0, 0), 200, 'red')
  drawFunc((0, 0), 125, 'white')
  drawFunc((0, 0), 50, 'red')

#drawSquare((0, 0), 200, 'red')
#drawSquare((0, 0), 125, 'white')
#drawSquare((0, 0), 50, 'red')

#drawCircle((0, 0), 200, 'red')
#drawCircle((0, 0), 125, 'white')
#drawCircle((0, 0), 50, 'red')

# instead of the above:
drawTargetLogo(drawCircle, 100)
# or
# drawTargetLogo(drawSquare, 200)
