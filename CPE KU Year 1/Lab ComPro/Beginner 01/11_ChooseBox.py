a = int(input('A: '))
b = int(input('B: '))
c = int(input('C: '))
if a <= b <= c : a,b,c = a,b,c
elif a <= c <= b : a,b,c = a,c,b
elif b <= a <= c : a,b,c = b,a,c
elif b <= c <= a : a,b,c = b,c,a
elif c <= a <= b : a,b,c = c,a,b
elif c <= b <= a : a,b,c = c,b,a
if a <= 8 and b <= 10 and c <= 15 : print('Box size 1')
elif a <= 12 and b <= 15 and c <= 25 : print('Box size 2')
elif a <= 20 and b <= 40 and c <= 50 : print('Box size 3')
else : print('Oversize product')