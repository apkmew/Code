class Std :
    def __init__(self,id,type,price) :
        self.id = id
        self.type = type
        self.price = price

n = int(input('How many products are there? : '))
classes = list()
idd = []
for i in range(n) :
    id,type,price = input().split()
    data = Std(id,type,price)
    classes.append(data)
    idd.append(id)
id = input('Id : ')
while id not in idd :
    print('This id doesn\'t exist.')
    id = input('Id : ')
while(True) :
    opr = int(input('Q : '))
    if opr == 0 : break 
    elif opr == 3 : 
        id = input('Id : ')
        while id not in idd :
            print('This id doesn\'t exist.')
            id = input('Id : ')
    for i in classes :
        if i.id == id :
            if opr == 1 :
                print(i.type)
            elif opr == 2 :
                print(i.price)
            break