a = {}
while True :
    id = int(input('Student ID : '))
    if id == 0 : break
    year = int(input('years : '))
    a[id] = year
separate = int(input('Separate year: '))
for i in a.keys() :
    if a[i] >= separate : print(i)