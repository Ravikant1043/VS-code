import turtle
import time
t=turtle.Turtle()

x,y=0,0
t.penup()
t.goto(x,-100)
t.pendown()

t.begin_fill()
t.fillcolor("yellow")
t.circle(100)
t.penup()
t.goto(x,-70)
t.pendown()
t.circle(70)
t.penup()
t.goto(0,0)
t.end_fill()

t.setheading(90)
for i in range(1,13):
    t.right(360/12)
    t.fd(90)
    t.write(i)
    t.goto(0,0)

def hourhand():
    t.penup()
    t.home()
    t.pendown()
    t.setheading(180)
    t.pensize(5)
    t.fd(50)
    t.home()

def minutehand():
    t.penup()
    t.home()
    t.pendown()
    t.setheading(90)
    t.pensize(2)
    t.fd(75)
    t.home()

def secondhand():
    t.pensize(1)
    t.setheading(0)
    for i in range(60):
        t.fd(80)
        t.color("yellow")
        time.sleep(1)
        t.backward(80)
        t.color("black")
        t.right(360/60)


hourhand()
minutehand()
secondhand()

turtle.done()