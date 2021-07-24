a = input('Input name: ')
a = list(a)
for i in range(len(a)) :
    a[i] = a[i].upper()
    print(''.join(a))
    a[i] = a[i].lower()
