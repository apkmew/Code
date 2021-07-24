n = int(input())
a = []
for i in range(n) : 
    x = int(input())
    a.append(x)
mn1 = min(a)
if n > 1 : a.remove(mn1)
mn2 = min(a)
mx = max(a)
if mn1 + mn2 > mx : print('no')
else : print('yes')