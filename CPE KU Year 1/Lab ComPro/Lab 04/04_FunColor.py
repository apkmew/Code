n = int(input('N : '))
ch = 0
a = [int(x) for x in input().split()]
for now in a :
    if now == 0 and ch == 0 : continue
    if ch == 0 : 
        if now == 1 : ch = 2
        else : ch = 1
    else :
        if ch != now and now != 0 : 
            print('no')
            exit(0)
        else :
            if ch == 1 : ch = 2
            else : ch = 1
print('yes')