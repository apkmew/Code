def draw(n) :
    for i in range(n-1) : print((' '*i) + '*' + (' '*((n-2-i)*2+n)) + '*')
    for i in range(n) :
        print(' '*(n-1),end='')
        if i == 0 or i == n-1 : print('*'*n)
        else : print('*' + ' '*(n-2) + '*')
    for i in range(n-2,-1,-1) : print((' '*i) + '*' + (' '*((n-2-i)*2+n)) + '*')

n = int(input())
draw(n)