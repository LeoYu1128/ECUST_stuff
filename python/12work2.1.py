import math
import turtle
turtle.setup(800,800,0,0)
ttl=turtle.Turtle()
def drawst(ttl,start,end,spd,w,h):
    t=start
    while t<end:
        if t>start:
            ttl.pendown()
        x=(w/4)*((-2)*math.sin(2*t)+math.sin(t))
        y=(h/4)*((-2)*math.cos(2*t)+math.cos(t))
        if y>=0:
            ttl.goto(x,y)
            ttl.color('red')
        if y<=0:
            ttl.goto(x,y)
            ttl.color('green')
        t+=spd
    ttl.penup()
def drawline(ttl,x1,y1,x2,y2):
    ttl.penup()
    ttl.goto(x1,y1)
    ttl.color('red')
    ttl.pendown()
    ttl.goto(x2,y2)
    ttl.color('red')
    ttl.penup()
drawline(ttl,-500,0,500,0)
drawline(ttl,0,-500,0,500)
drawst(ttl,0,2*math.pi,0.1,300,300)
turtle.done()
