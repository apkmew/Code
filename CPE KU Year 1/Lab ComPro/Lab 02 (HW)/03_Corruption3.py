h = int(input('hight of electric poles : '))
n = int(input('number of electric poles : '))
total = mx1 = mx2 = ch = 0
for i in range(n) :
    num = int(input())
    if num > mx1 : 
        mx2 = mx1
        mx1 = num
    elif num > mx2 : mx2 = num
    total += num
if mx1 < mx2*3 :
    avg = total // n
else :
    ch = 1
    avg = (total-mx1)//(n-1) + mx1//(mx1//mx2)
print('Avg :',avg)
if h <= 1 :
    if ch == 0 :
        if avg < 1000 : print('NO')
        else : print('YES',avg-1000)
    else :
        if avg < 3000 : print('NO')
        else : print('YES',avg-3000)
elif h <= 4 :
    if ch == 0 :
        if avg < 5000 : print('NO')
        else : print('YES',avg-5000)
    else :
        if avg < 10000 : print('NO')
        else : print('YES',avg-10000)
elif h <= 8 :
    if ch == 0 :
        if avg < 30000 : print('NO')
        else : print('YES',avg-30000)
    else :
        if avg < 50000 : print('NO')
        else : print('YES',avg-50000)
else :
    if ch == 0 :
        if avg < 75000 : print('NO')
        else : print('YES',avg-75000)
    else :
        if avg < 100000 : print('NO')
        else : print('YES',avg-100000)