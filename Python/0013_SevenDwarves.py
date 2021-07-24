a = []
sum = 0
ch = 1
for i in range(9) :
    a.append(int(input()))
    sum = sum + a[i]
for i in range(9) :
    for j in range(9) :
        if i!=j :
            if sum - a[i] - a[j] == 100 :
                a[i] = a[j] = 0
                ch = 0
        if ch==0 : break
    if ch==0 : break
for i in range(9) :
    if a[i]!=0 :
        print(a[i])