import itertools as itt
import numpy
n = int(input())
s = []
b = []
a = []
f = []
for i in range(n) :
    z,y = [int(x) for x in input().split()]
    s.append(z)
    b.append(y)
    a.append(i)
mn = 2e9
for i in range(1,n+1) :
    f.append([x for x in itt.combinations(a,i)])
print(f)
