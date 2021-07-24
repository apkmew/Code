n = float(input('Input Gold: '))
n = int(n)
n = n//1000
if n == 0 :
    print('Not enough gold.')
    exit(0)
for i in range(3+2*n) :
    if i == 0 or i == 2+2*n : print(' ' + 'o'*(4+3*n))
    else : print('o'*(6+3*n))
for i in range(2+n) :
    print(' '*(3+n) + 'o'*n)
for i in range(n) :
    print(' '*(2+n) + 'o'*(2+n))
print(' '*(3+n) + 'o'*n)