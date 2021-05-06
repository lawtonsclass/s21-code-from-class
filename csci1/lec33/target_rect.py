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


drawSquare((0, 0), 200, 'red')
drawSquare((0, 0), 125, 'white')
drawSquare((0, 0), 50, 'red')
