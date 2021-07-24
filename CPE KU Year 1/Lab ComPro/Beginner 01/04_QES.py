import sys
a = float(input('Value of 1st coefficient: '))
if a == 0 :
    print('1st coefficient can\'t be zero. Program exits.')
    sys.exit()
b = float(input('Value of 2nd coefficient: '))
c = float(input('Value of 3rd coefficient: '))
d = b**2 - 4*a*c
if d > 0 :
    ans1 = (-b + d**(1/2))/(2*a)
    ans2 = (-b - d**(1/2))/(2*a)
    print('Two real roots: ' + '{:.3f}'.format(ans1) + ' and ' + '{:.3f}'.format(ans2))
elif d == 0 :
    ans = (-b)/(2*a)
    print('One real root: ' + '{:.3f}'.format(ans))
else :
    ans11 = (-b)/(2*a) 
    ans12 = (-d)**(1/2)/(2*a)
    ans21 = (-b)/(2*a) 
    ans22 = (-d)**(1/2)/(2*a)
    if ans12 < 0 :
        ans12 = -ans12
        ans22 = -ans22
    print('Two complex roots: ' + '{:.3f}'.format(ans11) + '+' + '{:.3f}'.format(ans12) + 'i',end='')
    print(' and ' + '{:.3f}'.format(ans21) + '-' + '{:.3f}'.format(ans22) + 'i')
