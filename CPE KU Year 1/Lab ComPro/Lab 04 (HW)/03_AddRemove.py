a = [int(x) for x in input().split()]
while True : 
    opr,x = input().split()
    x = int(x)
    if opr == 'A' : a.append(x)
    elif opr == 'S' : print(a[x])
    elif opr == 'R' : a.pop(x)
    elif opr == 'E' : break
print(' '.join([str(y) for y in a]))