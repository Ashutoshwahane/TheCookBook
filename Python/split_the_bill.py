print("*****____WELCOME TO SPLIT THE BILL____*****")
Total_Amount_bill = int(input("Enter the total amount of bill ==>> "))
people = []
name = []
paid_people = []
bachakucha = []
no_of_people = int(input("Enter the number of people ==>> "))
for i in range(no_of_people):
    name = input("Enter the Names ==>> ")
    people.append(name)
    rs = int(input("--how much he  paid -->"))
    paid_people.append(rs)
if sum(paid_people)==Total_Amount_bill:
    print("The amount is correct ")
else :
    print("The amount  is not correct please check the amount ")
div_amount = Total_Amount_bill/no_of_people
print(" per/person charge amount  ==> ",div_amount)
for i in range(no_of_people):
    print(people[i]," amount paid = ",paid_people[i])
for i in range(no_of_people):

    if div_amount- paid_people[i] > 0:
        print(people[i], " needs to paid this amount ", paid_people[i] - div_amount)
    else:
        print(people[i], " no need to pay ")




