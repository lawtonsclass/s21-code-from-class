import turtle

turtle.shape('turtle')

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

drawRectangle((-50, 100), 200, 150, 'blue')
drawRectangle((-100, -150), 100, 100, 'red')
