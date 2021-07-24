n = int(input())
a = [int(x) for x in input().split()]
a.sort()
j = 0
while a[j] == 0 :
    j = j + 1
a[0],a[j] = a[j],a[0]    
for i in a :
    print(i,end='')