'''from tkinter import *
obj = Tk()
canvas_obj = Canvas(bg='blue',width=40,height=60)
canvas_obj.pack()
canvas_height=20
canvas_width=200
y=int(canvas_height/2)
canvas_obj.create_line(0,y,canvas_width,y)
obj.mainloop()'''

from tkinter import *
master = Tk()
var1 = IntVar()
Checkbutton(master, text='male', variable=var1).grid(row=0, sticky=W)
var2 = IntVar()
Checkbutton(master, text='female', variable=var2).grid(row=1, sticky=W)
mainloop()