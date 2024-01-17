import turtle
import time

# help(turtle.shape)

a=turtle.Turtle()

    # 'arrow', 'turtle', 'circle', 'square', 'triangle', 'classic'. shapes available in the turtle module for turtle object
a.shape("turtle")

#  for increasing the shape and size of the turtle object 
a.shapesize(1)

# for changing the direction of the turtle object  by default it is faced in the east side
a.setheading(90)
# angle is always taken from east side to the reference direction

time.sleep(4)