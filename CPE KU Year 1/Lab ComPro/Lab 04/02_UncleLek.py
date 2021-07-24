n = int(input('N = '))
d1 = int(input('cost of day 1 = '))
d2 = int(input('cost of day 2 = '))
mn = 2e9
for i in range(3,n+1) :
    d = int(input(f'cost of day {i} = '))
    total = d1 + d2 + d
    mn = min(mn,total)
    d1 = d2
    d2 = d
print('Min cost of 3 days =',mn)