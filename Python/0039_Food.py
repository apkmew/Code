import itertools as itt
n = int(input())
z = int(input())
a = []
b = [int(x) for x in input().split()]
for i in range(n) :
    a.append(i+1)
ans = [x for x in itt.permutations(a)]
for i in range(len(ans)) :
    if ans[i][0] not in b : 
        for j in range(len(a)) : 
            print(ans[i][j],end=' ')
        print('')