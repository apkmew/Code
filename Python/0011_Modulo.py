a = []
for i in range(10) :
    num = int(input())
    num = num%42
    if num in a : a.remove(num)
    a.append(num)
print(len(a))