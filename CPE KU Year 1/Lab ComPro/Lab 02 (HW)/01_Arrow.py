n = int(input())
ar = input('Arrow : ')
st = input('Stick : ')
for i in range(n) :
    print(' '*(n-i) + ar*(2*(i+1)-1))
for i in range(n) :
    print(' '*n + st)