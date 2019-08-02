from turtle import *
wn = Screen()                           #making a window
wn.title("Ashutosh Wahane")              #writing the title
wn.bgcolor("black")
wn.setup(width=800 , height= 600)           #costumizing the window
wn.tracer(0)

while True :
    wn.update()

#padle 1

p1 = Turtle()                   #object is created
p1.speed()                      #speed for the animation
p1.shape("square")
p1.color("white")
p1.penup()                       #for not drawimg
p1.goto(-350,0)
