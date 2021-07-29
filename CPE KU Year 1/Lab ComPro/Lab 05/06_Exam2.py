n = int(input('Number of inputs: '))
total = dict()
time = dict()
while n :
    n -= 1
    name = input('Input name: ')
    score = float(input('Input score: '))
    if name in total.keys() :
        total[name] += score
        time[name] += 1
    else :
        total[name] = score
        time[name] = 1
mx = -1
ans = ''
for x in total.keys() :
    mean = total[x]/time[x]
    if mean > mx :
        mx = mean
        ans = x
print(f'Top score is {ans}: {mx:.2f}')