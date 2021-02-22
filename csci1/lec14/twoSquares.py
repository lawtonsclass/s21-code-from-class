import turtle # imports the turtle library

turtle.shape("turtle") # make the turtle look like a turtle

turtle.speed('fast') # make the turtle move fast

print(turtle.position())

turtle.forward(150) # turtle, please move 150 units forward in your cur. direction

turtle.left(90) # turn left 90 degrees

turtle.forward(150)

turtle.left(90) 

turtle.forward(150)

turtle.left(90) 

turtle.forward(150)

# we made a square!!!

# let's make another

# pick up the turtle so that he doesn't draw extra lines when moving
turtle.up() # now he won't draw

turtle.forward(100)

# now we can put the tail down
turtle.down()

# face east
turtle.setheading(0)

turtle.forward(75)
turtle.left(90)
turtle.forward(75)
turtle.left(90)
turtle.forward(75)
turtle.left(90)
turtle.forward(75)
