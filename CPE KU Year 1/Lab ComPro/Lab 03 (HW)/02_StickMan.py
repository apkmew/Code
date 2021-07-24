def Head(n) :
    for i in range(n//2+1) :
        print(' ',end='')
        if i == 0 or i == n//2 : print('o'*n)
        else : print('o' + (' '*(n-2)) + 'o')

def Body(n) :
    for i in range(n-1) :
        if i == n//2-1 : print(('-'*(n//2)) + '||' + ('-'*(n//2)))
        else : print((' '*(n//2)) + '||')

def Leg(n) :
    for i in range(n//2) :
        print((' '*(n//2-i)) + '/' + ' '*(i*2) + '\\')

n = int(input())
Head(n)
Body(n)
Leg(n)