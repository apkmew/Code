prime = []
twin = []
mx = 1000
ch = [0,1]*(mx//2+1)
ch[1] = 0
ch[2] = 1
prime.append(2)
k = int(mx**(1/2))
for i in range(3,k+1) :
    if ch[i] == 1 :
        for j in range(i+i,mx+1,i) :
            ch[j] = 0
for i in range(3,mx+1) : 
    if ch[i] == 1 : prime.append(i)
for i in range(1,len(prime)-1) :
    if prime[i] == prime[i+1] - 2 : twin.append(prime[i])
prime.remove(2)
n = int(input('N: '))
for i in range(len(twin)) :
    if twin[i] >= n :
        print(f'({twin[i]}, {twin[i]+2})')
        break