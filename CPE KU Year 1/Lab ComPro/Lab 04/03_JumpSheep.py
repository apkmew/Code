print('Grass : ',end='')
n,k = [int(x) for x in input().split()]
a = [int(x) for x in input().split()]
ans = 0
for i in a :
    if i > k : ans += 1
print(ans)