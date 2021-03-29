import turtle

turtle.shape('turtle')

def drawN(ul, w, h, color):
  turtle.pencolor(color)
  # get the x & y out of ul
  x = ul[0]
  y = ul[1]
  
  # draw the N
  turtle.up()
  turtle.goto(x, y - h)
  turtle.down()
  turtle.goto(x, y)
  turtle.goto(x+w, y-h)
  turtle.goto(x+w, y)

  

drawN((-50, 100), 200, 150, 'blue')
drawN((-100, -150), 100, 100, 'red')
drawN((100, 150), 15, 50, 'black')
