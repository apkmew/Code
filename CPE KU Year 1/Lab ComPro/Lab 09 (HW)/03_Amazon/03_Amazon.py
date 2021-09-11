import json
f = input('file name: ')
opr = int(input('input: '))
a = []
with open(f,'r') as fp :
    for line in fp :
        a.append(json.loads(line))

if opr == 1 :
    print(len(a))

elif opr == 2 :
    l = []
    for rv in a :
        if rv['reviewerID'] not in l : l.append(rv['reviewerID'])
    print(len(l))

elif opr == 3 :
    l = []
    for rv in a :
        if rv['productID'] not in l : l.append(rv['productID'])
    print(len(l))

elif opr == 4 :
    l = []
    for rv in a :
        pro = rv['category'].split('>')
        if pro[0] not in l : l.append(pro[0])
    print(len(l))

elif opr == 5 :
    l = []
    for rv in a :
        pro = rv['category'].split('>')
        if pro[1] not in l : l.append(pro[1])
    print(len(l))

elif opr == 6 :
    mp = {}
    mx,ans = -1,''
    for rv in a :
        if rv['reviewerID'] not in mp : mp[rv['reviewerID']] = 0
        mp[rv['reviewerID']] += 1
        if mp[rv['reviewerID']] > mx :
            mx = mp[rv['reviewerID']]
            ans = rv['reviewerID']
    print(ans)

elif opr == 7 :
    mp = {}
    for rv in a :
        if rv['productName'] not in mp : mp[rv['productName']] = []
        mp[rv['productName']].append(rv['overall'])
    mx,ans,num = -1,'',0
    for pro in mp :
        avg = sum(mp[pro])/len(mp[pro])
        if avg > mx : 
            mx = avg
            ans = pro
            num = len(mp[pro])
        elif avg == mx and len(mp[pro]) > num :
            num = len(mp[pro])
            ans = pro
    print(ans)

elif opr == 8 :
    mp = {}
    for rv in a :
        if rv['productName'] not in mp : mp[rv['productName']] = []
        num = len(rv['reviewText'].split())
        mp[rv['productName']].append(num)
    mx,ans = -1,''
    for pro in mp :
        avg = sum(mp[pro])/len(mp[pro])
        if avg > mx :
            mx = avg
            ans = pro
    print(ans)