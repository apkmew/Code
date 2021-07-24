n,m = [int(x) for x in input().split()]
l,k = [int(x) for x in input().split()]
c = int(input())
total = 0
for i in range(n) :
    a = [int(x) for x in input().split()]
    total += sum(a)
total += l*k*c
import math
print(math.ceil(total/c))