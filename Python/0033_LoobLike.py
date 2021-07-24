n = int(input())
a = [int(x) for x in input().split()]
mp = dict()
for i in a :
    if i in mp : mp[i] += 1
    else : mp[i] = 1
mx = max([x for x in mp.values()])
for i in sorted(mp) :
    if mp[i] == mx :
        print(i,end=' ')

