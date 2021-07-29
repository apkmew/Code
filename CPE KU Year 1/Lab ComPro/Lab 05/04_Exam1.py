n = int(input('Number of inputs: '))
mp = dict()
for i in range(n) :
    name,score = input().split()
    score = int(score)
    mp[name] = score
while True :
    name = input('student: ')
    if name == '' : break
    print(f'{name}\'s score is {mp[name]}')
print('End')