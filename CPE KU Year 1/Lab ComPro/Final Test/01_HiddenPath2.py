a = input('Enter a string 1 : ')
b = input('Enter a string 2 : ')
aa,bb,k = len(a),len(b),0
if aa >= bb :
    for i in range(aa) :
        for j in range(aa-1-i) :
            print(' ',end=' ')
        for j in range(i+1) :
            print(a[j],end=' ')
        for j in range(i) :
            print(a[i-j-1],end=' ')
        for j in range(aa-1-i) :
            print(' ',end=' ')
        if i >= aa - bb  :
            for j in range(bb-1-k) :
                print(' ',end=' ')
            for j in range(k+1) :
                print(b[j],end=' ')
            for j in range(k) :
                print(b[k-j-1],end=' ')
            k += 1
        print()
    k = 0
    for i in range(aa-1) :
        for j in range(i+1) : 
            print(' ',end=' ')
        for j in range(aa-i-1) :
            print(a[j],end=' ')
        for j in range(aa-i-2) :
            print(a[aa-i-j-3],end=' ')
        for j in range(i+1) : 
            print(' ',end=' ')
        if i < bb - 1 :
            for j in range(k+1) : 
                print(' ',end=' ')
            for j in range(bb-k-1) :
                print(b[j],end=' ')
            for j in range(bb-k-2) :
                print(b[bb-k-j-3],end=' ')
            k += 1
        print()

elif aa < bb :
    for i in range(bb) :
        if i >= bb - aa  :
            for j in range(aa-1-k) :
                print(' ',end=' ')
            for j in range(k+1) :
                print(a[j],end=' ')
            for j in range(k) :
                print(a[k-j-1],end=' ')
            for j in range(aa-k-1) :
                print(' ',end=' ')
            k += 1
        if i < bb - aa : print('  '*(2*aa-1),end='')
        for j in range(bb-1-i) :
            print(' ',end=' ')
        for j in range(i+1) :
            print(b[j],end=' ')
        for j in range(i) :
            print(b[i-j-1],end=' ')
        
        print()
    k = 0
    for i in range(bb-1) :
        if i < aa - 1 :
            for j in range(k+1) : 
                print(' ',end=' ')
            for j in range(aa-k-1) :
                print(a[j],end=' ')
            for j in range(aa-k-2) :
                print(a[aa-k-j-3],end=' ')
            for j in range(k+1) : 
                print(' ',end=' ')
            k += 1
        if i >= aa - 1 : print('  '*(2*aa-1),end='')
        for j in range(i+1) : 
            print(' ',end=' ')
        for j in range(bb-i-1) :
            print(b[j],end=' ')
        for j in range(bb-i-2) :
            print(b[bb-i-j-3],end=' ')
        print()