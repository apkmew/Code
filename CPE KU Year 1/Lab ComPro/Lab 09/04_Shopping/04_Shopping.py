import json
f = input('Enter json filename : ')
with open(f,'r') as fp :
    x = fp.read()
a = json.loads(x)
l,mp,pro = [],{},{}
for cus in a['customers'] :
    l.append(cus['customer_name'])
    y = {}
    y['order'] = cus['order']
    y['money'] = cus['money']
    mp[cus['customer_name']] = y
for product in a['products'] :
    pro[product['product_name']] = int(product['price'])
l.sort()
for cus in l :
    money = int(mp[cus]['money'])
    order = mp[cus]['order']
    price = 0
    for product in order :
        price += pro[product] * order[product]
    print(cus)
    change = money - price 
    if change == 0 :
        print('no change\n')
        continue
    c = [1000,500,100,50,20,10,5,2,1]
    for cc in c : 
        if change >= cc :
            print(cc,':',change//cc)
            change -= change//cc*cc
    print()