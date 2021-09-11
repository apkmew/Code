import json
f = input('Filename : ')
data = input('Data : ')
with open(f,'r') as fp :
    x = fp.read()
a = json.loads(x)
ch = 0
for i in a :
    for j in i :
        if i[j] == data : 
            print('Found in blacklist')
            ch = 1
            for k in i :
                print(f'{k} : {i[k]}')
            break
if ch == 0 : print('Not found in blacklist')