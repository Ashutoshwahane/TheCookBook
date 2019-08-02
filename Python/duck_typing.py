class pycharm:
    def run(self):
        print("pycharm")
        print("pycharm*")
        print("pycharm**")
        print("pycharm***")

class sublime:
    def run(self):
        print("sublime")
        print("sublime*")
        print("sublime**")
        print("sublime***")


class notepad:
    def runnable(self,other):
        other.run(self)


n = notepad()
n.runnable(sublime)

