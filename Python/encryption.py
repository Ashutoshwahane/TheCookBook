from pyfiglet import *
print(figlet_format("Cypher Encryption & Decryption",font="bubble"))
key = "wilskhafdrcyenptobgjmquvxz"                                         #Encryption Key
final_key = list(key)
alpha = "abcdefghijklmnopqrstuvwxyz"                                       #To Declare A-Z
user_msg = input("Enter the message : ")
case1 = []
two_digit = ""
for i in user_msg:
    for j in range(len(final_key)):
        if i==final_key[j]:
            case1.append(final_key[j + 1])                                 #Applying First Algo
for e in case1:
    for index,char in enumerate(alpha):
        if e == char:
            two_digit = two_digit + "{0:0=2d}-".format(index + 1)           # Converting into two digit number
encrypt = two_digit[0:len(two_digit)-1]
print("Encrypted Message is : ", encrypt)
e_msg = input("Enter the Encrypted msg : ").split("-")
num = []
for i in e_msg:
    num.append(int(i))
d_case = []
for e in num:
    for index,char in enumerate(alpha):
        if e==index:
            d_case.append(alpha[index - 1])

decrypt = ""
for i in range(len(d_case)):
    for j in range(len(key)):
        if d_case[i]==key[j]:
            decrypt += key[j-1]

print("Your Decrypted Message is : " , decrypt)