m,n = input().split()
m = int(m)
n = int(n)
a = [[]*n]*m
b = [[]*n]*m
for i in range(m):
    a[i] = [int(x) for x in input().split()]
for i in range(m):
    b[i] = [int(x) for x in input().split()]
for i in range(m):
    for j in range(n):
        print(a[i][j]+b[i][j],end=' ')
    print()