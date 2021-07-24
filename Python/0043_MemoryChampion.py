a = [0]*301
for i in range(1,301) :
    for j in range(1,i+1) :
        for k in range(1,i+i+j) :
            a[i] += (i*j*k)%(i+j+k)
    #print(a[i],end=' ')
q = int(input())
for i in range(q) :
    n = int(input())
    print(a[n])

