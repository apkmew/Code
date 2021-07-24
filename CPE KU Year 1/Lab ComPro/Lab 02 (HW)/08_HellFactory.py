a = int(input('A: '))
b = int(input('B: '))
c = int(input('C: '))
while True :
    if a>=c and b>=c :
        a -= 1
        b -= 1
        c += 1
    elif a>=b and c>=b :
        a -= 1
        c -= 1
        b += 1
    elif b>=a and c>=a :
        b -= 1
        c -= 1
        a += 1
    cou = 0
    if a == 0 : cou += 1
    if b == 0 : cou += 1
    if c == 0 : cou += 1
    if cou >= 2 : break
if a>0 : print('A')
elif b>0 : print('B')
elif c>0 : print('C') 