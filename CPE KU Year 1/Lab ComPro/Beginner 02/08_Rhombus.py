n = int(input('input: '))
for i in range(n//2) : print(' '*(n//2-i) + '#'*(2*i+1))
print('#'*n)
for i in range(n//2) : print(' '*(i+1) + '#'*(n-2-2*i))