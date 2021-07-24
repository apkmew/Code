n = int(input('number of electric poles : '))
mx1 = mx2 = 0
while n :
    n -= 1
    num = int(input())
    if num > mx1 : 
        mx2 = mx1
        mx1 = num
    elif num > mx2 : mx2 = num
if mx1 >= mx2*3 : 
    print('YES')
    print(mx1)
else :
    print('NO')