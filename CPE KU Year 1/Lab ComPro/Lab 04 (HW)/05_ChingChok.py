lucky = int(input('Enter lucky number : '))
n = int(input('Enter amount of candidates : '))
cou = 0
ans = []
mx = -1
while cou < n :
    cou += 1
    a = input(f'Enter ID card number {cou}: ')
    a = list(a)
    a = [int(x) for x in a]
    cnt = 0
    for x in a :
        if x == lucky : cnt += 1
    if cnt > mx : 
        mx = cnt
        ans = a
    elif cnt == mx :
        for i in range(len(a)) :
            if a[i] > ans[i] : 
                ans = a
                break
            if ans[i] > a[i] : break
print('Winner:',''.join([str(y) for y in ans]))