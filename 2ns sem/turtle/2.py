import turtle
y=turtle.Turtle()
# y.shape('')
y.color('white')
y.screen.bgcolor('black')
y.speed(10)

for i in range(10):
    y.circle(5*i)
    y.goto(0,-5*i)
turtle.done()