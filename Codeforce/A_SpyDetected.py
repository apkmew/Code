q = int(input())
for i in range(q) :
    n = int(input())
    a = [int(x) for x in input().split()]
    ans = 0
    for j in range(1,n-1) :
        if a[j] != a[j-1] and a[j] != a[j+1] : ans = j + 1
    if ans == 0 :
        if a[0] != a[1] : ans = 1
        else : ans = n
    print(ans)