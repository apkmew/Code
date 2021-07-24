tv = int(input('How many TVs to buy? '))
dvd = int(input('How many DVD players to buy? '))
audio = int(input('How many audio systems to buy? '))
price = tv*7200 + dvd*1800 + audio*3600
print(f'Total price is {price:.2f} baht.')
if price >= 24000 : 
    dc = price * 10 / 100
    print(f'You got a discount of {dc:.2f} baht.')
    price -= dc
print(f'Your payment is {price:.2f} baht. Thank you.')