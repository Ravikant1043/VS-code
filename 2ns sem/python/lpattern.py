# from turtle import*
# import time
# color("red")
# begin_fill()
# pensize(3)
# left(50)
# forward(133)
# circle(50,200)
# right(140)
# circle(50,200)
# forward(133)
# end_fill()
# time.sleep(5)
# # turtle.print("i")


import turtle
from turtle import *
import time
wn=Screen()
wn.bgcolor('black')

t=turtle.Turtle()
t.pencolor('white')

def curve():
    for i in range(200):
        t.rt(1)
        t.fd(1)
def heart():
    t.fillcolor('red')
    t.begin_fill()
    t.lt(140)
    t.fd(113)
    curve()
    t.lt(120)
    curve()
    t.fd(112)
    t.end_fill()
    # time.sleep(2)

heart()
t.ht()

def write(message,pos):
    x,y=pos
    t.penup()
    t.goto(x,y)
    t.color('yellow')
    style=('Stencil Std', 18, 'italic')
    t.write()

write('A',(-55,95))
turtle.done()
# wn.play()