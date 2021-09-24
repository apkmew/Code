def minus(a,b) :
    for i in b :
        if i in a : a.remove(i)
    if len(a) == 0 : return 'empty set'
    return a

A = [int(x) for x in input('Input set A: ').split()]
B = [int(x) for x in input('Input set B: ').split()]
print(f'A minus B: {minus(A,B)}')