class turn :
    def __init__(self,name,speed,hp) :
        self.name = name
        self.speed = speed
        self.hp = hp
    def __lt__(self,other) :
        return self.speed > other.speed

import numpy as np
X = np.random.RandomState(1)
hp = int(input('Blood Start: '))
speed = int(input('Your speed: '))
classes = list()
classes.append(turn('Your',speed,hp))
n = int(input('Number of monsters: '))
for i in range(n) :
    speed = int(input(f'Monster {i+1} speed: '))
    classes.append(turn(f'Monster {i+1}',speed,hp//n))
classes.sort()
trn,attack,ch = 0,10,0
while True :
    trn += 1
    print('=========================')
    print(f'Turn {trn}')
    print('-------------------------')
    for i in classes :
        if i.hp == 0 : continue
        print(f'- {i.name} Turn -')
        if i.name == 'Your' :
            opr = input('Attack(a) or Heal(h): ')
            if opr == 'a' :
                for j in classes :
                    if j.name != 'Your' and j.hp > 0 :
                        j.hp -= attack
                        if j.hp <= 0 : 
                            j.hp = 0
                            if j.speed == 1 or j.speed == 2 and i.speed == 1 : ch = 1
                        print(f'{j.name} HP left {j.hp}')
                        attack += 2
                        break
            elif opr == 'h' :
                i.hp += 20*n
                attack = 10
                print(f'Your HP left {i.hp}')
        else :
            for j in classes :
                if j.name == 'Your' :
                    j.hp -= X.randint(1,40)
                    if j.hp <= 0 : 
                        j.hp = 0
                        ch = 2
                    print(f'{j.name} HP left {j.hp}')
        if ch : break
    if ch : break
if ch == 1 : print('You win.(^_^)')
elif ch == 2 : print('You lose and die.(T_T)')
