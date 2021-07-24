mx = -1
a = []
prime = []
while True :
    num = int(input())
    if num == 0 : break
    mx = max(mx,num)
    a.append(num)
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
cou = 0
for x in a :
    if x in prime :
        cou += 1
        print(x,end=' ')
        if cou == 10 :
            cou = 0
            print('')
