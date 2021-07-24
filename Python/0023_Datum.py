a = [0,31,28,31,30,31,30,31,31,30,31,30,31]
for i in range(1,13) :
    a[i] = a[i] + a[i-1]
d,m = [int(x) for x in input().split()]
d = d + a[m-1]
if d%7==0 : print('Wednesday')
elif d%7==1 : print('Thursday')
elif d%7==2 : print('Friday')
elif d%7==3 : print('Saturday')
elif d%7==4 : print('Sunday')
elif d%7==5 : print('Monday')
elif d%7==6 : print('Tuesday')