import turtle
import colorsys
import random

color=('red', 'green', 'blue','purple','yellow')
t=turtle.Turtle()
s=turtle.Screen()
s.bgcolor("Black")
t.speed(0)
# t.penup()
'''
t.pendown()
'''
for i in range(72):
    c=random.choice(color)
    t.color(c)
    t.left(5)
    for j in range(5):
        t.fd(250)
        t.left(144)
turtle.done()