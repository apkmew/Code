n = int(input())
if n%2==1 : n += 1
a = 1
b = 1
for i in range(n,n//2,-1) :
    a *= i
for i in range(1,n//2+1) :
    b *= i
print(a//b)