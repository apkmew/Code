mp = {}
n = int(input())
while n :
    n -= 1
    a,arai,rel,arai2,b = input().split()
    if a not in mp : mp[a] = []
    mp[a].append(b)

arai,a,arai2,b,arai3,arai4 = input().split()
ans = 'No'
for i in mp :
    if a in mp[i] and b in mp[i] : ans = 'Yes'
print(ans)