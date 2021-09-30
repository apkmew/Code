cou = 0
def stair(level) :
    global cou
    if level == n :
        cou += 1
        return
    if level + a <= n : stair(level + a)
    if level + b <= n : stair(level + b)
    if level + c <= n : stair(level + c)
    return

n = int(input('n : '))
a = int(input('a : '))
b = int(input('b : '))
c = int(input('c : '))
l = sorted([a,b,c])
a,b,c = l[0],l[1],l[2]
stair(0)
print(cou)
