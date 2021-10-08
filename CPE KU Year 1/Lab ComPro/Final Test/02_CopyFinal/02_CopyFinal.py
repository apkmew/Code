class sim :
    def __init__(self,name,num) :
        self.name = name
        self.num = num
    def __lt__(self,other) :
        if self.num != other.num : return self.num > other.num
        else : return self.name < other.name

f = input('Enter your Filename: ')
sh = input('Show by name or id?: ')
pc = input('How many similarity percentages do you want?: ')
mp,cou,mp2,classes = {},0,{},[]
with open(f,'r') as fp :
    header = fp.readline()
    for line in fp :
        id1,name1,pct,id2,name2 = line.strip().split(',')
        if sh == 'name' : a,b = name1,name2
        elif sh == 'id' : a,b = id1,id2
        if pct > pc :
            ch = False
            for i in mp :
                if a in mp[i] or b in mp[i] :
                    if a not in mp[i] : mp[i].append(a)
                    elif b not in mp[i] : mp[i].append(b)
                    ch = True
            if ch == False :
                cou += 1
                mp[f'Group{cou}'] = []
                mp[f'Group{cou}'].append(a)
                mp[f'Group{cou}'].append(b)
            if a not in mp2 : mp2[a] = 0
            if b not in mp2 : mp2[b] = 0
            mp2[a] += 1
            mp2[b] += 1
print('==============================')
for group in mp :
    mp[group].sort()
    print(f'{group}: ',end='')
    print(' '.join(mp[group]))
print('==============================')
n = int(input('Input number of top similarity: '))
print('==============================')
for i in mp2 :
    classes.append(sim(i,mp2[i]))
classes.sort()
cnt = 0
for i in classes :
    cnt += 1 
    print(i.name)
    if cnt >= n : break