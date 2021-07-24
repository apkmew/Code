n,m = [int(x) for x in input().split()]
a = []
for i in range(n) :
    num = int(input())
    a.append(num)
for i in range(m) :
    b = input()
    opr = b[0]
    if opr == 'a' : 
        x,y = int(b[2]),int(b[4])
        a[x-1],a[y-1] = a[y-1],a[x-1]
    if opr == 'b' :
        x,k = int(b[2]),int(b[4])
        a[x-1] = k
    if opr == 'c' :
        x = int(b[2]) 
        r = []
        for j in range(n) : r.append(a[j])
        r.reverse()
        a.clear()
        for j in range(n-x,n) : a.append(r[j])
        for j in range(n-x) : a.append(r[j])
    if opr == 'q' :
        x = int(b[2])
        print(a[x-1])