p = {}
l = {}
f = input('File name: ')
with open(f,'r') as fp :
    ch = 0
    for line in fp :
        print(line.strip())
        a = line.split()
        if a[0] == 'Price' :
            ch = 1
        elif a[0] == 'List' :
            ch = 2
        else :
            x,y = a[0],int(a[1])
            if ch == 1 : p[x] = y
            elif ch == 2 : 
                l[x] = y
                if x not in p : p[x] = 0
total = 0
for x in l :
    total += l[x] * p[x]
print(f'Total price: {total}')