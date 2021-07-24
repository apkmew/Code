x,y,z = [int(x) for x in input().split()]
a = [x,y,z]
a.sort()
s = input()
for i in range(3):
    if s[i] == 'A' : print(a[0],end=' ')
    if s[i] == 'B' : print(a[1],end=' ')
    if s[i] == 'C' : print(a[2],end=' ')
