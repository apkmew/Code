ps = ng = 0
while True :
    num = float(input('Enter a number (or 0 to exit): '))
    if num > 0 : ps += num
    elif num < 0 : ng += num
    else : break
print(f'Sum of positive numbers is {ps:.2f}')
print(f'Sum of negative numbers is {ng:.2f}')