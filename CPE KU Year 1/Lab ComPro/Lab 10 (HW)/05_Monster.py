import numpy as np
X = np.random.RandomState(1)
php = int(input('Blood Start: '))
mhp,attack = php,10
while mhp > 0 and php > 0 :
    opr = input('Attack(a) or Heal(h): ')
    if opr == 'a' :
        mhp -= attack
        attack += 2
        if mhp <= 0 : mhp = 0
        print(f'Monster\'s HP left {mhp}')
    elif opr == 'h' :
        php += 20
        attack = 10
        print(f'Your HP left {php}')
    if mhp <= 0 or php <= 0 : break
    php -= X.randint(1,40)
    if php <= 0 : php = 0
    print(f'Monster\'s turn : Your HP left {php}')
if mhp <= 0 : print('You win.(^_^)')
elif php <= 0 : print('You lose and die.(T_T)')