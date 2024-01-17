import turtle
import time
turtle.speed(0)

t=turtle.Turtle()
turtle.bgcolor("black")
turtle.speed(0)

for i in range(5):
    for colours in ['red', 'green', 'blue']:
        turtle.color(colours)
        turtle.pensize(3)
        turtle.left(12) 
        turtle.forward(200)
        turtle.left(90) 
        turtle.forward(200)
        turtle.left(90) 
        turtle.forward(200)
        turtle.left(90) 
        turtle.forward(200)
        turtle.left(90)         
        # turtle.speed(1)
        # time.sleep(2)