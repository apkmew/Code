matrix = []
print('Row 1 : ',end='')
a = [int(x) for x in input().split()]
a.append(a[0])
a.append(a[1])
matrix.append(a)
print('Row 2 : ',end='')
a = [int(x) for x in input().split()]
a.append(a[0])
a.append(a[1])
matrix.append(a)
print('Row 3 : ',end='')
a = [int(x) for x in input().split()]
a.append(a[0])
a.append(a[1])
matrix.append(a)
ans = 0
for i in range(3) :
    ans += matrix[0][i] * matrix[1][i+1] * matrix[2][i+2] 
for i in range(3) :
    ans -= matrix[2][i] * matrix[1][i+1] * matrix[0][i+2]
print(ans)