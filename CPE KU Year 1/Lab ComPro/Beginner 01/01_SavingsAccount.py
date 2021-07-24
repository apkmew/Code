x = int(input('Enter initial amount in Baht: '))
y = int(input('Enter interest rate in percent: '))
y = y/100+1
ans = x * y
print(f'Total amount after 1 year is {ans:.2f} Baht.')
ans = x * y**5
print(f'Total amount after 5 years is {ans:.2f} Baht.')
ans = x * y**10
print(f'Total amount after 10 years is {ans:.2f} Baht.')
ans = x * y**20
print(f'Total amount after 20 years is {ans:.2f} Baht.')