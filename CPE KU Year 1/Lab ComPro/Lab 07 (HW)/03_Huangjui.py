a = []
ch = 0
b = [int(x) for x in input().split()]
l = len(b)
a.append(b)
while True :
    b = [int(x) for x in input().split()]
    if b == [] : break
    a.append(b)
    if len(b) != l : ch = 1
if ch == 1 :
    print('Can\'t Buy')
    exit(0)
mn = 2e9
for i in range(len(a)-1) :
    for j in range(len(a[0])-1) :
        total = a[i][j] + a[i][j+1]*11/10 + a[i+1][j+1]*11/10 + a[i+1][j]*121/100
        mn = min(mn,total)
        total = a[i+1][j] + a[i+1][j+1]*11/10 + a[i][j+1]*11/10 + a[i][j]*121/100
        mn = min(mn,total)
#print(f'{mn:.2f}')
print(mn)