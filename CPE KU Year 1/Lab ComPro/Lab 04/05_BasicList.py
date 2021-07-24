cou = total = 0
mn = 2e9
mx = -1
a = []
while cou < 5 :
    num = int(input('Enter a positive number: '))
    if num <= 0 : continue
    a.append(num)
    cou += 1
print('sum:',sum(a))
print('min:',min(a))
print('max:',max(a))
a.sort()
print('med:',a[2])