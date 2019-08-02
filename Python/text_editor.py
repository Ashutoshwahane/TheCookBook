from tkinter import *   #Tk GUI toolkit of Python
main_obj = Tk()
main_obj.title("Text_editor")
bt = Button(text="press",width=10,bg='yellow',activeforeground='red',activebackground='blue',command=main_obj.destroy)
bt.pack()
main_obj.mainloop()
