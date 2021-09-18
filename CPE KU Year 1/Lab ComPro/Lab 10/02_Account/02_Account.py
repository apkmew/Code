class Std :
    def __init__(self,name,account,money,his) :
        self.name = name
        self.account = account
        self.money = money
        self.his = his
    def show_data(self) :
        print(f'Name : {self.name}')
        print(f'Account number : {self.account}')
        print(f'Money : {self.money}')
        print(f'History : {self.his}')
    def deposit(self) :
        amount = int(input('Amount : '))
        self.money += amount
        print(f'Current money : {self.money}')
        if self.his == '' : self.his = 'Deposit : ' + str(amount) 
        else : self.his = self.his + '\n' + 'Deposit : ' + str(amount)
    def withdraw(self) :
        amount = int(input('amount : '))
        self.money -= amount
        print(f'Current money : {self.money}')
        if self.his == '' : self.his = 'Withdraw : ' + str(amount) 
        else :self.his =  self.his + '\n' + 'Withdraw : ' + str(amount)
    def show_history(self) :
        print(self.his)

import json 
f = input('Filename : ')
user = input('Account number : ')
with open(f,'r') as fp :
    x = fp.read()
a = json.loads(x)
classes = list()
for i in range(len(a)) :
    data = Std(a[i]['name'],a[i]['account number'],a[i]['money'],a[i]['history'])
    classes.append(data)
while True :
    opr = int(input('Menu : '))
    if opr == 0 : break
    for i in classes :
        if i.account == user :
            if opr == 1 :
                i.show_data()
            elif opr == 2 :
                i.deposit()
            elif opr == 3 :
                i.withdraw()
            elif opr == 4 :
                i.show_history()
            elif opr == 5 :
                user = input('Account number : ')
                break