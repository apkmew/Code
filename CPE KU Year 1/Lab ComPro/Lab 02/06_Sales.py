day = int(input('How many day : '))
total = 0
for i in range(day) :
    price = float(input(f'Input price in day {i+1} : '))
    total += price * (100-5-i) / 100
print('Summary price = ' + '{:.2f}'.format(total))