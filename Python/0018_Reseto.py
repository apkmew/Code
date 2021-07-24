n,k = [int(x) for x in input().split()]
a = [False]*(n+1)
for i in range(2,n+1) :
    if a[i] : continue
    k -= 1
    if k==0 :
        print(i)
        exit(0)
    for j in range(i*i,n+1,i) :
        if not a[j] : k -= 1
        a[j] = True
        if k==0 :
            print(j)
            exit(0)