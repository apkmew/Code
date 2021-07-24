import pandas as pd

interested_feild = ['Order Date','Total Promotions','Total Charged',]
data = pd.read_csv("amazon-orders.csv",usecols=interested_feild)

mx = 0
sum = {}
for x in data.iterrows() : 
    promotion = float(x[1][1][1:])
    charged = float(x[1][2][1:])
    if x[1][0] in sum : sum[x[1][0]] += charged
    else : sum[x[1][0]] = charged
    mx = max(mx,promotion)
print('Spent Each Day')
for x in sum : 
    print(x,": $","%.2lf"%sum[x])
print('Most Promotion')
for x in data.iterrows() :
    promotion = float(x[1][1][1:])
    if promotion == mx :
        print('Date :',x[1][0])
        print('Promotion Amout : $',"%.2lf"%promotion)
