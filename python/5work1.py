from turtle import *
class c:
    def __init__(self,x,y,r,color):
        self.x=x
        self.y=y
        self.r=r
        self.color=color
        pensize(4)
        pencolor(color)
        penup()
        goto(x,y)
        pendown()
        circle(r)
c(-55,0,20,'blue')
c(0,0,20,'black')
c(55,0,20,'red')
c(-30,-15,20,'yellow')
c(30,-15,20,'green')
