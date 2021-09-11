f = input('filename: ')
opr = int(input('type: '))
mp = {}
with open(f,'r') as fp :
    header = fp.readline().strip().split(',')
    for line in fp :
        data = line.strip().split(',')
        mpp = {}
        for i in range(1,len(data)) :
            mpp[header[i]] = int(data[i])
        mp[data[0]] = mpp
if opr == 1 :
    total = 0
    for state in mp :
        total += mp[state]['Total Cases']
    print(total)

elif opr == 2 :
    mx,ans = -1,''
    for state in mp :
        if mp[state]['Deaths'] > mx :
            mx = mp[state]['Deaths']
            ans = state
    print(ans)

elif opr == 3 :
    mx,ans = -1,''
    for state in mp :
        x = mp[state]['Deaths'] / mp[state]['Total Cases']
        if x > mx :
            mx = x
            ans = state
    print(ans)

elif opr == 4 :
    mx,ans = -1,''
    for state in mp :
        if mp[state]['Discharged'] > mx :
            mx = mp[state]['Discharged']
            ans = state
    print(ans)

elif opr == 5 :
    total = 0
    for state in mp :
        total += mp[state]['Total Cases']
    total2 = 0
    for state in mp :
        total2 += mp[state]['Active']
    ans = total2/total*100
    print(f'{ans:.2f}%')

elif opr == 6 :
    l = []
    for state in mp :
        total = mp[state]['day1'] + mp[state]['day2'] + mp[state]['day3'] + mp[state]['day4'] + mp[state]['day5'] + mp[state]['day6'] + mp[state]['day7']
        avg = total/7
        l.append(avg)
    l.sort(reverse=True)
    for state in mp :
        total = mp[state]['day1'] + mp[state]['day2'] + mp[state]['day3'] + mp[state]['day4'] + mp[state]['day5'] + mp[state]['day6'] + mp[state]['day7']
        avg = total/7
        if avg == l[0] : print(f'{state} {l[0]:.0f}')
    for state in mp :
        total = mp[state]['day1'] + mp[state]['day2'] + mp[state]['day3'] + mp[state]['day4'] + mp[state]['day5'] + mp[state]['day6'] + mp[state]['day7']
        avg = total/7
        if avg == l[1] : print(f'{state} {l[1]:.0f}')
    for state in mp :
        total = mp[state]['day1'] + mp[state]['day2'] + mp[state]['day3'] + mp[state]['day4'] + mp[state]['day5'] + mp[state]['day6'] + mp[state]['day7']
        avg = total/7
        if avg == l[2] : print(f'{state} {l[2]:.0f}')
    for state in mp :
        total = mp[state]['day1'] + mp[state]['day2'] + mp[state]['day3'] + mp[state]['day4'] + mp[state]['day5'] + mp[state]['day6'] + mp[state]['day7']
        avg = total/7
        if avg == l[3] : print(f'{state} {l[3]:.0f}')
    for state in mp :
        total = mp[state]['day1'] + mp[state]['day2'] + mp[state]['day3'] + mp[state]['day4'] + mp[state]['day5'] + mp[state]['day6'] + mp[state]['day7']
        avg = total/7
        if avg == l[4] : print(f'{state} {l[4]:.0f}')

elif opr == 7 :
    ans = []
    for state in mp :
        ch = 0 
        if mp[state]['day3'] > 100 and mp[state]['day4'] > 100 and mp[state]['day5'] > 100 :
            if mp[state]['day1'] > 100 and mp[state]['day2'] > 100 : ans.append(state)
            elif mp[state]['day2'] > 100 and mp[state]['day6'] > 100 : ans.append(state)
            elif mp[state]['day6'] > 100 and mp[state]['day7'] > 100 : ans.append(state)
    ans.sort()
    print('\n'.join(ans))