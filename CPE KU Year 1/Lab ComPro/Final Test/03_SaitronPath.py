def play(i,j,l) :
    cou = 0
    while True :
        if i < 0 or j < 0 or i >= len(a) or j >= len(a[0]) : break
        if a[i][j] == '\\' :
            cou += 1
            if l == 'w' : i,j,l = i+1,j,'n'
            elif l == 'n' : i,j,l = i,j+1,'w'
            elif l == 'e' : i,j,l = i-1,j,'s'
            elif l == 's' : i,j,l = i,j-1,'e'
        elif a[i][j] == '/' :
            cou += 1
            if l == 'w' : i,j,l = i-1,j,'s'
            elif l == 'n' : i,j,l = i,j-1,'e'
            elif l == 'e' : i,j,l = i+1,j,'n'
            elif l == 's' : i,j,l = i,j+1,'w'
        elif a[i][j] == 'O' :
            if l == 'w' : i,j,l = i,j+1,'w'
            elif l == 'n' : i,j,l = i+1,j,'n'
            elif l == 'e' : i,j,l = i,j-1,'e'
            elif l == 's' : i,j,l = i-1,j,'s'
    return cou

def play2(i,j,l) :
    while True :
        if i < 0 or j < 0 or i >= len(a) or j >= len(a[0]) : break
        if a[i][j] == '\\' :
            ans.append((i,j))
            if l == 'w' : i,j,l = i+1,j,'n'
            elif l == 'n' : i,j,l = i,j+1,'w'
            elif l == 'e' : i,j,l = i-1,j,'s'
            elif l == 's' : i,j,l = i,j-1,'e'
        elif a[i][j] == '/' :
            ans.append((i,j))
            if l == 'w' : i,j,l = i-1,j,'s'
            elif l == 'n' : i,j,l = i,j-1,'e'
            elif l == 'e' : i,j,l = i+1,j,'n'
            elif l == 's' : i,j,l = i,j+1,'w'
        elif a[i][j] == 'O' :
            ans.append((i,j))
            if l == 'w' : i,j,l = i,j+1,'w'
            elif l == 'n' : i,j,l = i+1,j,'n'
            elif l == 'e' : i,j,l = i,j-1,'e'
            elif l == 's' : i,j,l = i-1,j,'s'

a,ans = [],[]
while True :
    b = input().split()
    if '\\' not in b and '/' not in b and 'O' not in b : break 
    a.append(b)
mx,ii,jj,ll = -1,0,0,'0'
for i in range(len(a)) :
    cou = play(i,0,'w')
    if cou > mx :
        mx = cou
        ii,jj,ll = i,0,'w'
    cou = play(i,len(a[0])-1,'e')
    if cou > mx :
        mx = cou
        ii,jj,ll = i,len(a[0])-1,'e'
for j in range(len(a[0])) :
    cou = play(0,j,'n')
    if cou > mx :
        mx = cou
        ii,jj,ll = 0,j,'n'
    cou = play(len(a)-1,j,'s')
    if cou > mx :
        mx = cou
        ii,jj,ll = len(a)-1,j,'s'
print(f'Maximum saitron is {2**mx} particle(s)')
play2(ii,jj,ll)
for i in range(len(a)) :
    for j in range(len(a[0])) :
        if (i,j) in ans : print('.',end=' ')
        else : print(a[i][j],end=' ')
    print()