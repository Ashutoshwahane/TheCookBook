from tkinter import *
master = Tk()
bt = Button(activebackground='red',command=master.destroy,height=2,width=4,font='press',activeforeground='yellow',bg='white',text='close')
can = Canvas(bg='yellow',bd=10,width=40,height=20)
can.create_line(0,10,200,10)
can.pack()
var1 = IntVar()
ck1 = Checkbutton(master, text='male', variable=var1).grid(row=0, sticky=W)
var2 = IntVar()
ck2 = Checkbutton(master, text='female', variable=var2).grid(row=1, sticky=W)
ck1.pack()
ck2.pack()
bt.pack()

mainloop()