from tkinter import *
from tkinter.messagebox import showinfo
from tkinter.filedialog import askopenfilename, asksaveasfilename
import os

def newFile():
    global file
    root.title("Untitled - Notepad")
    file = None
    TextArea.delete(1.0, END)


def openFile():
    global file
    file = askopenfilename(defaultextension=".txt",
                           filetypes=[("All Files", "*.*"),
                                     ("Text Documents", "*.txt")])
    if file == "":
        file = None
    else:
        root.title(os.path.basename(file) + " - Notepad")
        TextArea.delete(1.0, END)
        f = open(file, "r")
        TextArea.insert(1.0, f.read())
        f.close()


def saveFile():
    global file
    if file == None:
        file = asksaveasfilename(initialfile = 'Untitled.txt', defaultextension=".txt",
                           filetypes=[("All Files", "*.*"),
                                     ("Text Documents", "*.txt")])
        if file =="":
            file = None

        else:
            #Save as a new file
            f = open(file, "w")
            f.write(TextArea.get(1.0, END))
            f.close()

            root.title(os.path.basename(file) + " - Notepad")
            print("File Saved")
    else:
        # Save the file
        f = open(file, "w")
        f.write(TextArea.get(1.0, END))
        f.close()


def quitApp():
    root.destroy()

def cut():
    TextArea.event_generate(("<<Cut>>"))

def copy():
    TextArea.event_generate(("<<Copy>>"))

def paste():
    TextArea.event_generate(("<<Paste>>"))

def encrypt():
    pass

def decrypt():
    pass

def letters():
    text = TextArea.get(1.0, END)
    letter = 0
    for char in text:
        if not char is ' ':
            letter += 1
    showinfo("**** Lettes ****", "Total No of Letters are : "+str(letter-1))

def words():
    text = TextArea.get(1.0, END)
    word = len(text.split())
    showinfo("***** Words *****", " Total No of Words are : " + str(word))

def vowels():
    text = TextArea.get(1.0, END)
    vowel = "aAeEiIoOuU"
    final = [letter for letter in text if letter in vowel]

    showinfo("**** Vowels *****", " Total No of Words are : " + str(len(final)))

def articles():
    pass


def about():
    showinfo("Notepad", "Notepad by darkclay and willskhalifa")

if __name__ == '__main__':
    #Basic tkinter setup
    root = Tk()
    root.title("Untitled - Clay text Editor")
    root.geometry("800x800")

    #Add TextArea
    TextArea = Text(root, font="lucida 13")
    file = None
    TextArea.pack(expand=True, fill=BOTH)

    # Lets create a menubar
    MenuBar = Menu(root)

    #File Menu Starts
    FileMenu = Menu(MenuBar, tearoff=0)
    # To open new file
    FileMenu.add_command(label="New", command=newFile)

    #To Open already existing file
    FileMenu.add_command(label="Open", command = openFile)

    # To save the current file

    FileMenu.add_command(label = "Save", command = saveFile)
    FileMenu.add_separator()
    FileMenu.add_command(label = "Exit", command = quitApp)
    MenuBar.add_cascade(label = "File", menu=FileMenu)
    # File Menu ends

    # Edit Menu Starts
    EditMenu = Menu(MenuBar, tearoff=0)
    #To give a feature of cut, copy and paste
    EditMenu.add_command(label = "Cut", command=cut)
    EditMenu.add_command(label = "Copy", command=copy)
    EditMenu.add_command(label = "Paste", command=paste)

    MenuBar.add_cascade(label="Edit", menu = EditMenu)
    # Edit Menu Ends

    #Features Menu Starts
    FeatureMenu = Menu(MenuBar, tearoff=0)
    # To give a feature of Encrypt, Decrypt
    FeatureMenu.add_command(label="Encrypt", command=encrypt)
    FeatureMenu.add_command(label="Decrypt", command=decrypt)

    MenuBar.add_cascade(label="Features", menu=FeatureMenu)
    # Feature Menu Ends

    # Functions Menu Starts
    FunctionMenu = Menu(MenuBar, tearoff=0)
    # To give a feature of Encrypt, Decrypt
    FunctionMenu.add_command(label="Count Letters", command=letters)
    FunctionMenu.add_command(label="Count Words", command=words)
    FunctionMenu.add_command(label="Count Vowels", command=vowels)
    FunctionMenu.add_command(label="Count Article", command=articles)

    MenuBar.add_cascade(label="Function", menu=FunctionMenu)
    # Function Menu Ends

    # Help Menu Starts
    HelpMenu = Menu(MenuBar, tearoff=0)
    HelpMenu.add_command(label = "About Notepad", command=about)
    MenuBar.add_cascade(label="Help", menu=HelpMenu)

    # Help Menu Ends

    root.config(menu=MenuBar)

    #Adding Scrollbar using rules from Tkinter lecture no 22
    Scroll = Scrollbar(TextArea)
    Scroll.pack(side=RIGHT,  fill=Y)
    Scroll.config(command=TextArea.yview)
    TextArea.config(yscrollcommand=Scroll.set)

    root.mainloop()