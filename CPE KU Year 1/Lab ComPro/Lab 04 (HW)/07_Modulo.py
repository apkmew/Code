n = int(input('N: '))
m = int(input('M: '))
ans = []
for i in range(n) :
    num = int(input(f'Input number {i+1}: '))
    mod = num%m
    if mod in ans : ans.remove(mod)
    ans.append(mod)
print(len(ans))