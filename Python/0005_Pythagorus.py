a,b = input().split()
a = float(a)
b = float(b)
c = a*a + b*b
c = pow(c,1/2)
print('{:.6f}'.format(c))