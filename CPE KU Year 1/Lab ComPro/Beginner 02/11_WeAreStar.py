n = int(input('n: '))
for i in range(1,n+1) :
    for j in range(1,n+1) :
        if i==j or i==n-j+1 or i==n//2+1 or j==n//2+1 : print('+',end='')
        else : print(' ',end='')
    print('')