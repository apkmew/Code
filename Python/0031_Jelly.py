a,b,c = [int(x) for x in input().split()]
cou = 0
while a>1 or b>1 or c>1 :
    x = max(a,b,c)
    if x == a : a = a//2
    elif x == b : b = b//2
    elif x == c : c = c//2
    cou = cou + 1
print(cou)