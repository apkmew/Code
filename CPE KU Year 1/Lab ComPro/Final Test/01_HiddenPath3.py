n = int(input('n : '))
a,mx = [],-1
for i in range(n) :
    b = input(f'Enter a string {i+1} : ')
    a.append(b)
    mx = max(mx,len(b))
for i in range(mx) :
    for word in a :
        l = len(word)
        if i < mx - l : print(' '*(4*l-2),end='')
        else :
            for j in range(l-1-(i-mx+l)) : print(' ',end=' ')
            for j in range((i-mx+l)+1) : print(word[j],end=' ')
            for j in range(i-mx+l) : print(word[(i-mx+l)-j-1],end=' ')
            for j in range(l-1-(i-mx+l)) : print(' ',end=' ')    
    print()
for i in range(mx-1) :
    for word in a :
        l = len(word)
        if i >= l - 1 : print(' '*(4*l-2),end='')
        else :
            for j in range(i+1) : print(' ',end=' ')
            for j in range(l-i-1) : print(word[j],end=' ')
            for j in range(l-i-2) : print(word[l-i-j-3],end=' ')
            for j in range(i+1) : print(' ',end=' ')
    print()