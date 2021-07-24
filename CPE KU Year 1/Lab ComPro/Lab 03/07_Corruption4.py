a = input()
a = a.upper()
n = len(a)
if a[0] != a[n-1] : print('NO')
else :
    print('YES')
    print(a[0])