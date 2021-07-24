t = int(input('How long have Buzz played ?: '))
hr = t // 60
if t % 60 > 20 : hr += 1
price = hr * 900
if hr >= 5 : price = price * 70 // 100
elif hr >= 4 : price = price * 80 // 100
elif hr >= 2 : price = price * 90 // 100
print(f'Total price is {price} baht.')  