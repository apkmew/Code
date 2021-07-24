n = int(input())
for i in range(1,n//2+2) :
    print(' '*((n//2)-i+1) + 'O'*(2*i-1))
for i in range(1,n//2+1) :
    print(' '*i + 'O'*(n-2*i))