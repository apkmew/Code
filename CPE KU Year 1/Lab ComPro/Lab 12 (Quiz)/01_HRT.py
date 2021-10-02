n = int(input())
for i in range(2*n-1) :
    for j in range(2*n-1) :
        print(max(abs(n-i-1),abs(n-j-1))+1,end=' ')
    print()