pattern = int(input('pattern: '))
char = input('char: ')
n = int(input('n: '))
if pattern == 1 :
    for i in range(n) : print(char*(i+1))
elif pattern == 2 :
    for i in range(n) : print(char*(n-i))
elif pattern == 3 :
    for i in range(n) : print(' '*(n-i-1) + char*(i+1))
else : 
    for i in range(n) : print(' '*i + char*(n-i))