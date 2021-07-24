import itertools as itt
n = int(input())
a = []
mx = -1
for i in range(n) :
    b = [int(x) for x in input().split()]
    a.append(b)
p = [x for x in itt.combinations(a,3)]
for i in range(len(p)) :
    x1 = p[i][0][0]
    y1 = p[i][0][1]
    x2 = p[i][1][0]
    y2 = p[i][1][1]
    x3 = p[i][2][0]
    y3 = p[i][2][1]
    area = abs(x1*y2 + x2*y3 + x3*y1 - y1*x2 - y2*x3 - y3*x1)/2
    mx = max(mx,area)
print("{:.3f}".format(mx))