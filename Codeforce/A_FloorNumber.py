q = int(input())
for i in range(q) :
    n,x = [int(x) for x in input().split()]
    n -= 2
    if n <= 0 : print(1)
    elif n%x==0 : print(n//x+1)
    else : print(n//x+2)
