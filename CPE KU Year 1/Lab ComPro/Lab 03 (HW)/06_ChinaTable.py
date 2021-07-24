def plus(total,value) :
    total += value
    return total

def minus(total,value) :
    total -= value
    return total

n = int(input('How many food you have : '))
total = 0
while n :
    n -= 1
    x,y = [int(x) for x in input().split()]
    if y == 1 : total = plus(total,x)
    else : total = minus(total,x)
print(total)
