cou = 0
def stair(level) :
    global cou
    if level == n :
        cou += 1
        return
    if level + 1 <= n : stair(level + 1)
    if level + 2 <= n : stair(level + 2)
    if level + 3 <= n : stair(level + 3)
    return

n = int(input('n : '))
stair(0)
print(cou)
