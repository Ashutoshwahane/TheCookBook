# ls=[]
# for i in range(100):
#     if i%3==0:
#         ls.append(i)
#
# print(ls,end="")


ls = [i for i in range(100) if i%3==0]
print(ls)