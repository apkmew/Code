import json
f = input('File name: ')
opr = int(input('input: '))
with open(f,'r') as fp :
    x = fp.read()
a = json.loads(x)

if opr == 1 :
    print(len(a))

elif opr == 2 :
    l = []
    for tw in a :
        if tw['author'] not in l :
            l.append(tw['author'])
    print(len(l))

elif opr == 3 :
    mp = {}
    for tw in a :
        if tw['author'] not in mp :
            mp[tw['author']] = 0
        mp[tw['author']] += 1
    mx,ans = -1,[]
    for au in mp :
        if mp[au] > mx :
            ans.clear()
            mx = mp[au]
        if mp[au] == mx :
            ans.append(au)
    print('\n'.join(ans))

elif opr == 4 :
    tpc = []
    for tw in a :
        if tw['topic'] not in tpc : tpc.append(tw['topic'])
    print(len(tpc))

elif opr == 5 :
    total = 0
    for tw in a :
        if tw['topic_priority'] == 'ALERT' : total += 1
    print(total)

elif opr == 6 :
    total = 0
    for tw in a :
        if tw['topic_priority'] == 'UNIMPORTANT' : total += 1
    print(total)

elif opr == 7 :
    ans = False
    for tw in a :
        if tw['language'] != 'EN' : ans = True
    print(ans)

elif opr == 8 :
    mx = -1
    for tw in a :
        txt = tw['text']
        txt = txt.split()
        mx = max(mx,len(txt))
    print(mx)