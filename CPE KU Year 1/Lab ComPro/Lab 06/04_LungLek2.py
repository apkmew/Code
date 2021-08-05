n = int(input('N = '))
m = int(input('M = '))
qs = [0]
for i in range(1,n+1) :
    num = int(input(f'cost of day {i} = '))
    qs.append(num)
    qs[i] += qs[i-1]
    if i == m : mn = qs[i]
    if i > m : mn = min(mn,qs[i]-qs[i-m])
print(f'Min cost of {m} days = {mn}')