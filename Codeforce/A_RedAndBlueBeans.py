t = int(input())
for i in range(t) :
    r,b,d = [int(x) for x in input().split()]
    mn = min(r,b)
    mx = max(r,b)
    if (1+d)*mn >= mx : print('yes')
    else : print('no')