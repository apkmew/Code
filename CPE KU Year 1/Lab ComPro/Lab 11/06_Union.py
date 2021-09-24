def union(a,b) :
    for i in b :
        if i not in a : a.append(i)
    a.sort()
    return a

A = [int(x) for x in input('Input set A: ').split()]
B = [int(x) for x in input('Input set B: ').split()]
print(f'A union B: {union(A,B)}')