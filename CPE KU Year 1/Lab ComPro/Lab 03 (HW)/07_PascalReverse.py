import math
n = int(input())
for i in range(n-1,-1,-1) :
    for j in range(i+1) :
        print(math.factorial(i)//(math.factorial(j)*math.factorial(i-j)),end=' ')
    print('')