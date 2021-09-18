import json
filename = input('Filename : ')
opr = int(input('Menu : '))
with open(filename) as f:
        data = f.read()
        data = json.loads(data)
if opr == 1 :
    print(len(data))
elif opr == 2 :
    x = int(input('From : '))
    y = int(input('To : '))
    c = input('Start with Char : ')
    for i in range(x,y+1) :
        if data[i]['title'][0].upper() == c : print(f"{i} : {data[i]['title']}")
elif opr == 3 :
    x = int(input('From : '))
    y = int(input('To : '))
    ty = input('Type : ')
    cou,mx1,mx2,ans1,ans2 = 0,-1,-1,'',''
    for i in range(x,y+1) :
        if data[i]['type'] == ty :
            cou += 1
            if data[i]['mal_score'] > mx1 :
                mx1 = data[i]['mal_score']
                ans1 = data[i]['title']
            if data[i]['mal_favorites'] > mx2 :
                mx2 = data[i]['mal_favorites']
                ans2 = data[i]['title']
    print(f'{ty} : {cou}')
    print(f'Most scores : {ans1}')
    print(f'Most favorites : {ans2}')
elif opr == 4 :
    x = int(input('From : '))
    y = int(input('To : '))
    source = input('Source : ')
    status = input('Status : ')
    mul = int(input('Mul score : '))
    for i in range(x,y+1) :
        if data[i]['source'] == source and data[i]['status'] == status and data[i]['mal_score'] > mul :
            print(f'{i} : {data[i]["title"]}')
elif opr == 5 :
    x = int(input('From : '))
    y = int(input('To : '))
    ss = input('Season : ')
    cou = 0
    for i in range(x,y+1) :
        if str(data[i]['premiered']).split()[0] == ss :
            cou += 1
    print(f'{ss} : {cou}')
elif opr == 6 :
    x = int(input('From : '))
    y = int(input('To : '))
    cou = 0
    for i in range(x,y+1) :
        st = str(data[i]['aired_start']).split('-')[0]
        en = str(data[i]['aired_end']).split('-')[0]
        if st == 'None' or st == 'NULL' or en == 'None' or en == 'NULL' :
            continue
        if st == en :
            cou += 1
    print(f'Find : {cou}')
elif opr == 7 :
    title = input('Title : ')
    for i in range(len(data)) :
        if data[i]['title'] == title :
            print(data[i]['mal_rating'])
elif opr == 8 :
    x = int(input('From : '))
    y = int(input('To : '))
    mx,ans = -1,[]
    for i in range(x,y+1) :
        text = str(data[i]['synopsis'])
        if len(text.split()) > mx :
            mx = len(text.split())
            ans.clear()
        if len(text.split()) == mx :
            ans.append(i)
    for i in ans :
        print(f'{i} : {data[i]["title"]}')
#MyAnimeList_Anime_2021_05_16.json