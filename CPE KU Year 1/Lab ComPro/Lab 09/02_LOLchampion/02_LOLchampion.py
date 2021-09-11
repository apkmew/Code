import json
f = input('Filename : ')
opr = int(input('Case : '))
char = input('Character : ')
with open(f,'r') as fp :
    x = fp.read()
a = json.loads(x)
if opr == 0 :
    c = char.split(',')
    for id in a :
        if str(a[id]['id']) in c :
            print(f"{id}\t---\t{a[id]['name']}\t---\t{a[id]['title']}")
elif opr == 1 :
    c = char.split(',')
    for id in a :
        if a[id]['name'][0] in c :
            print(f"{id}\t---\t{a[id]['name']}\t---\t{a[id]['title']}")
elif opr == 2 :
    c = char.split(',')
    for id in a :
        y = a[id]['title'][0]
        if (y == 't' or y == 'T') and a[id]['title'][1] == 'h' and a[id]['title'][2] == 'e' : 
            y = a[id]['title'][4]
        if y in c :
            print(f"{id}\t---\t{a[id]['name']}\t---\t{a[id]['title']}")