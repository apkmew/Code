ans = []
mx = -1
f = input('File name: ')
with open(f,'r') as fp :
    for line in fp :
        a = line.split()
        name = a[0]
        a.remove(name)
        for i in range(len(a)) :
            a[i] = int(a[i])
        sc = sum(a) - min(a) - max(a)
        if sc > mx :
            mx = sc
            ans.clear()
        if sc == mx :
            ans.append(name)
print(mx)
print('\n'.join(ans))