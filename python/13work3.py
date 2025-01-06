from turtle import *
import math
penup()
goto(-50,0)
pensize(2)
for x in range(-50,50):
    y=10*math.sin(x)
    pendown()
    goto(x,y)
    penup()
done()
