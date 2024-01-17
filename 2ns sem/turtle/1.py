import turtle
import time

a=turtle.Turtle()
a.screen.bgcolor("black")
a.color("White")

#  for changing the thickness of the line
a.pensize(5)

a.hideturtle()
#  for moving the object forward 
a.fd(60)  # fd or forward is used
a.forward(30)

a.color("red")

# for moving the object backward
a.back(50)  # back or backward is used
a.backward(30)



time.sleep(3)