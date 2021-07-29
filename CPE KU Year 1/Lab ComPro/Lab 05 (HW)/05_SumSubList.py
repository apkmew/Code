qs = [int(x) for x in input().split()]
for i in range(1,len(qs)) :
    qs[i] += qs[i-1]
while True : 
    x,y = [int(x) for x in input().split()]
    if x < 0 : x = len(qs) + x
    if y < 0 : y = len(qs) + y
    if x > y and 0 <= x < len(qs) and 0 <= y < len(qs) : break
    if (x >= len(qs) or x < 0) and (y >= len(qs) or y < 0) : print('x and y Bad Input')
    elif x >= len(qs) or x < 0 : print('x Bad Input')
    elif y >= len(qs) or y < 0 : print('y Bad Input')
    else :
        if x == 0 : 
            print(qs[y])
        else :
            print(qs[y]-qs[x-1])