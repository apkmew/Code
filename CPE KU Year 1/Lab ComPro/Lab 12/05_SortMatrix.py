def printmat(mat):
  for i in range(len(mat)):
    for j in range(len(mat[0])):
      print(mat[i][j], end = " ")
    print()

n = int(input('M: '))
m = int(input('N: '))
mp = {}
for i in range(n) :
    num = [int(x) for x in input().split()]
    for j in range(m) :
        if i-j not in mp : mp[i-j] = []
        mp[i-j].append(num[j])
for i in mp :
    mp[i].sort()
ans = []
for i in range(n) :
    a = []
    for j in range(m) :
        a.append(mp[i-j][0])
        mp[i-j].pop(0)
    ans.append(a)
print('sorted matrix is:')
printmat(ans)