a = input('Input name: ')
a = list(a)
b = list(a)
b.reverse()
for i in range(len(a)) :
    c = a[i]
    for j in range(len(a)) : 
        if a[j] == c : a[j] = a[j].upper()  
    print(''.join(a),end=' ')
    for j in range(len(a)) : 
        if a[j] == c.upper() : a[j] = a[j].lower()
    c = b[i]
    for j in range(len(a)) : 
        if b[j] == c : b[j] = b[j].upper()
    print(''.join(b))
    for j in range(len(a)) : 
        if b[j] == c.upper() : b[j] = b[j].lower()