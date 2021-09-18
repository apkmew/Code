class Std :
    def __init__(self,name,time,res) :
        self.name = name
        self.time = time
        self.res = res
    def __lt__ (self,other) :
        if self.time != other.time : return self.time < other.time 
        elif self.res != other.res : return self.res > other.res
        else : return self.name < other.name

import json
f = input('Enter json filename : ')
dis = int(input('Enter distance (meter) : '))
with open (f,'r') as fp :
    x = fp.read()
b = json.loads(x)
a = b['racer']
classes = list()
for x in a :
    x['_range'].append(int(2e9))
    t = 0
    for i in range(len(x['_range'])-1) :
        if dis > x['_range'][i+1] : t += (x['_range'][i+1]-x['_range'][i])/x['velocity'][i]
        else : 
            t += (dis-x['_range'][i])/x['velocity'][i]
            t = round(t,2)
            break
    data = Std(x['name'],t,x['response'])
    classes.append(data)
classes.sort()
for x in classes :
    print(f'{x.name} {x.time:.2f}')