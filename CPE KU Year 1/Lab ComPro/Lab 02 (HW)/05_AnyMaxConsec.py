old = int(input())
mx = 1
cou = 1
ans = old
while True :
    num = int(input())
    if num == 0 : break
    if num == old :
        cou += 1
        if cou > mx : 
            mx = cou
            ans = num
    else :
        cou = 1
    old = num
print(mx)
print(ans)
