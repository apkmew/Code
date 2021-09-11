import json
f = input('File Name: ')
opr = int(input('Input : '))
with open(f,'r') as fp :
    x = fp.read()
a = json.loads(x)

if opr == 1 :
    print(len(a))

elif opr == 2 :
    total = 0
    for cntry in a :
        total += int(cntry['population'])
    print(total)

elif opr == 3 :
    total1,total2 = 0,0
    for cntry in a :
        if cntry['country'][0] == 'C' : total1 += 1
        if len(cntry['country']) > 5 : total2 += 1
    print(total1)
    print(total2)

elif opr == 4 :
    total1,total2,total3 = 0,0,0
    for cntry in a :
        if int(cntry['population']) > 500000000 : total1 += 1
        if 250000000 < int(cntry['population']) < 750000000 : total2 += 1
        if int(cntry['population']) < 10000000 : total3 += 1
    print(total1)
    print(total2)
    print(total3)

elif opr == 5 :
    total1,total2 = 0,0
    for cntry in a :
        if 1 <= int(cntry['Rank']) <= 20 : total1 += float(cntry['World'])*100
        if 50 <= int(cntry['Rank']) <= 150 : total2 += float(cntry['World'])*100
    print(f'{total1:.2f}')
    print(f'{total2:.2f}')