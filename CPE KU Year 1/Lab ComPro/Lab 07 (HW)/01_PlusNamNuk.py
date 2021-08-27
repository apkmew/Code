mp = {}
n = int(input('N : '))
while n :
    n -= 1
    name,weight = input().split()
    weight = int(weight)
    mp[name] = weight
a = input()
a = a.replace('+',' ')
a = a.split()
total = 0
for name in a :
    total += mp[name]
print(total)
'''
aaa 5
bbb 4
ddd 3
ccc 2
eee 1
aaa + bbb + ccc + eee
'''