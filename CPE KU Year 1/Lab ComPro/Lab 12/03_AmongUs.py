mp = {}
n = int(input('Input n: '))
m = int(input('Input m: '))
for i in range(n) :
    num = [int(x) for x in input().split()]
    for j in range(m) :
        mp[num[j]] = (i,j)
for i in range(n*m) :
    print(f'({mp[i+1][0]},{mp[i+1][1]})')