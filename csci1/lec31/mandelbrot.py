import turtle

turtle.speed("fastest")
turtle.shape("turtle")
turtle.tracer(100000)

def f(c, z):
  return z**2 + c

def diverges(x, y):
  # turn (x, y) into a complex number
  c = complex(x, y)

  z = complex(0, 0)
  # try to apply f to itself (starting at 0) 100 times
  for i in range(100):
    z = f(c, z)
    # let's say it diverges when |z| > 100
    if abs(z) > 100:
      return True

  return False

def drawPixel(x, y, color):
  turtle.up()
  turtle.goto(x, y)
  turtle.down()
  turtle.pencolor(color)
  turtle.goto(x, y+1)

for y in range(200, -201, -1): # y between [-200, 200]
  for x in range(-300, 201):   # x between [-200, 200]
    # scale the coordinate by 200
    # (so that we're between (-1, -1) and (1, 1)
    scale = 200
    scaled_x = x / scale
    scaled_y = y / scale

    if diverges(scaled_x, scaled_y):
      drawPixel(x, y, 'blue')
    else:
      drawPixel(x, y, 'black')

turtle.update()
    
