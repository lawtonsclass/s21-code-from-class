import turtle # imports the turtle library
import math

turtle.shape("turtle") # make the turtle look like a turtle

turtle.up()
turtle.backward(150)

turtle.right(90)

turtle.down() # put the turtle down so that we can draw again
turtle.forward(200) # draw first line of L

turtle.left(90)
turtle.forward(125)

# space between letters
turtle.up()
turtle.forward(40)
turtle.down()

turtle.left(90)
turtle.forward(200)

# calcuate the weird angle in the N
angle = math.atan(125/200)
angle = math.degrees(angle)

turtle.right(180-angle)

# calculate the weird length for the middle line of the N
length = 125 / math.sin(math.radians(angle))
turtle.forward(length)

turtle.left(180-angle)
turtle.forward(200)
