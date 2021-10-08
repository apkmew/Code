a = input('Enter a string, such as "ILoveYou" : ')
l = len(a)
for i in range(l) :
    for j in range(l-1-i) :
        print(' ',end=' ')
    for j in range(i+1) :
        print(a[j],end=' ')
    for j in range(i) :
        print(a[i-j-1],end=' ')
    print()
for i in range(l-1) :
    for j in range(i+1) : 
        print(' ',end=' ')
    for j in range(l-i-1) :
        print(a[j],end=' ')
    for j in range(l-i-2) :
        print(a[l-i-j-3],end=' ')
    print()