q = int(input())
for z in range(q) :
    m,n,x = [int(a) for a in input().split()]
    x -= 1
    i = x//m
    j = x%m
    x = n*j+i
    print(x+1)