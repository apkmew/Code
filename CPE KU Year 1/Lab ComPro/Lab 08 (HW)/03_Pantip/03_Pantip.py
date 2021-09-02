f = input('File name: ')
opr = int(input('enter number: '))
with open(f,'r') as fp :
    header = fp.readline().strip().split(',')
    dic = {}
    dicc = {}
    for i in range(len(header)-1) :
        dicc[header[i]] = []
    for line in fp : 
        a = line.strip().split(',')
        user = a[-1]
        b = {}
        total,mx1,mx2 = 0,-1,-1
        for i in range(len(a)-1) :
            b[header[i]] = int(a[i])
            dicc[header[i]].append(int(a[i]))
            total += int(a[i])
            if int(a[i]) > mx1 :
                mx2 = mx1
                mx1 = int(a[i])
            elif int(a[i]) > mx2 :
                mx2 = int(a[i])
        b['total'],b['mx1'],b['mx2'] = total,mx1,mx2
        dic[user] = b
        
    if opr == 1 :
        print(len(dic)+1)

    elif opr == 2 :
        mx,ans = -1,''
        for room in dicc :
            if sum(dicc[room]) > mx :
                mx = sum(dicc[room])
                ans = room
        print(ans)

    elif opr == 3 :
        dicc['blueplanet'].sort(reverse=True)
        print(dicc['blueplanet'][0],dicc['blueplanet'][1],dicc['blueplanet'][2])

    elif opr == 4 :
        mx,ans = -1,''
        for user in dic :
            if dic[user]['total'] > mx :
                mx = dic[user]['total']
                ans = user
        print(ans,mx)

    elif opr == 5 :
        mx,ans = -1,''
        for user in dic :
            if dic[user]['tvshow'] > mx :
                mx = dic[user]['tvshow']
                ans = user
        print(ans,mx)

    elif opr == 6 :
        ans = 0
        for num in dicc['korea'] :
            if num > 500 : ans += 1
        print(ans)
    
    elif opr == 7 :
        ans = 0
        for user in dic :
            if dic[user]['siam'] > dic[user]['food'] : ans += 1
        print(ans)

    elif opr == 8 :
        mx,ans = -1,''
        for user in dic :
            x = dic[user]['rajdumnern'] / dic[user]['total']
            if x > mx :
                mx = x
                ans = user
        print(ans)
    
    elif opr == 9 :
        ans = 0
        for user in dic :
            if (dic[user]['mx1'] + dic[user]['mx2']) / dic[user]['total'] > 0.7 : ans += 1
        print(ans)

    elif opr == 10 :
        ans = 0 
        for num in dicc['pantip'] :
            if num == 0 : ans += 1
        print(ans)

#pantip-read-20181015-20181222.csv