h = int(input('Enter the depth of the well: '))
u = int(input('How high the frog can jump up? '))
d = int(input('How far the frog slips down? '))
cou = now = 0
if d >= u and u < h: 
    print('The frog is always stuck in the well.')
    exit(0)
while True :
    cou += 1
    now += u
    if now >= h : break
    print(f'On day {cou} the frog leaps to the depth of {h-now} meters.')
    now -= d
    print(f'At night he slips down to the depth of {h-now} meters.')
print(f'The frog gets out of the well on day {cou}.')