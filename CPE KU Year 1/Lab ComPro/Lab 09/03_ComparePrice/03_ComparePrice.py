import json
f = input('Filename : ')
ty = input()
with open(f,'r') as fp :
    x = fp.read()
a = json.loads(x)
mn,ans = int(2e9),''
for product in a :
    if product['Product type'] == ty :
        if int(product['Cost']) < mn :
            mn = int(product['Cost'])
            ans = product['Brand']
print(ans,':',mn)