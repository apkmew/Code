num = int(input('Enter number of bushes: '))
n = int(input('Enter bush size: '))
while num :
    num -= 1
    for i in range(n) : print(' '*(n-i-1) + '*'*(2*i+1))