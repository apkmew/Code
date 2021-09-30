box1,box2,box3 = 0,0,0
n = int(input('N: '))
for i in range(n) :
    a = int(input(f'Order {i+1} A: '))
    b = int(input(f'Order {i+1} B: '))
    c = int(input(f'Order {i+1} C: '))
    a,b,c = sorted([a,b,c])
    if a <= 8 and b <= 10 and c <= 15 :
        print('Box size 1')
        box1 += 1
    elif a <= 12 and b <= 15 and c <= 25 :
        print('Box size 2')
        box2 += 1
    elif a <= 20 and b <= 40 and c <= 50 :
        print('Box size 3')
        box3 += 1
    else : print('Oversize product')
print('Use Box size 1:',box1)
print('Use Box size 2:',box2)
print('Use Box size 3:',box3)