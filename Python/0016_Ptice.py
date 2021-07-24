n = int(input())
c = input()
a = [0,0,0]
for i in range(n) :
    if i%3==0 and c[i]=='A' : a[0] = a[0] + 1
    elif i%3==1 and c[i]=='B' : a[0] = a[0] + 1
    elif i%3==2 and c[i]=='C' : a[0] = a[0] + 1
    if (i%4==0 or i%4==2) and c[i]=='B' : a[1] = a[1] + 1
    elif i%4==1 and c[i]=='A' : a[1] = a[1] + 1
    elif i%4==3 and c[i]=='C' : a[1] = a[1] + 1
    if (i%6==0 or i%6==1) and c[i]=='C' : a[2] = a[2] + 1
    elif (i%6==2 or i%6==3) and c[i]=='A' : a[2] = a[2] + 1
    elif (i%6==4 or i%6==5) and c[i]=='B' : a[2] = a[2] + 1
mx = max(a[0],a[1],a[2])
print(mx)
if a[0]==mx : print('Adrian')
if a[1]==mx : print('Bruno')
if a[2]==mx : print('Goran')