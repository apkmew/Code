f = input('Filename : ')
ans = []
with open(f,'r') as fp :
    for line in fp :
        #print(line.strip())
        n,h,c = line.split(',')
        if not n.isdigit() : continue
        n,h,c = int(n),int(h),int(c)
        if h <= 1 and c > 1000 : ans.append(n)
        if 1 < h <= 4 and c > 5000 : ans.append(n)
        if 4 < h <= 8 and c > 30000 : ans.append(n)
        if h > 8 and c > 75000 : ans.append(n)
if len(ans) == 0 : print('No')
else :
    ans.sort()
    print('Yes')
    print('\n'.join([str(x) for x in ans]))