a = []
mx = -1
for i in range(5) :
    sum = 0
    a = [int(x) for x in input().split()]
    for j in range(4) :
        sum = sum + a[j]
    if sum > mx :
        mx = sum
        ans = i+1
print(ans,end=' ')
print(mx)
