n = int(input())
a = []
for i in range(n) :
    b = input()
    if b not in a :
        a.append(b)
a.sort()
for i in a :
    print(i)