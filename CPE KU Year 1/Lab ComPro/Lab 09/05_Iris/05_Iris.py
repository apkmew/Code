import json
f = input('Filename : ')
ty = input('type : ')
with open(f,'r') as fp :
    x = fp.read()
a = json.loads(x)
mp = {}
for i in a :
    if i['species'] not in mp : mp[i['species']] = []
    mp[i['species']].append(i[ty])
for i in mp :
    print(f'{i} = {sum(mp[i])/len(mp[i]):.2f}')