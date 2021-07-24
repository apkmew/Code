def sum_price() :
    print('Menu')
    print('0. Finish')
    print('1. Latte = 40')
    print('2. Espresso = 45')
    print('3. Americano = 50')
    print('4. Mocca = 55')
    print('5. Cappuccino = 60')
    total = 0
    while True :
        coffee = int(input('coffee : '))
        if coffee == 0 : break
        amount = int(input('amount : '))
        if coffee == 1 : total += 40 * amount
        elif coffee == 2 : total += 45 * amount
        elif coffee == 3 : total += 50 * amount
        elif coffee == 4 : total += 55 * amount
        elif coffee == 5 : total += 60 * amount
    print('total price :',total)
    return total

def change(total_price,pay) :
    ch = pay - total_price
    print('customer\'s change :',ch)
    if ch >= 1000 : 
        print('change 1000 :',ch//1000)
        ch -= ch // 1000 * 1000
    if ch >= 500 : 
        print('change 500 :',ch//500)
        ch -= ch // 500 * 500
    if ch >= 100 : 
        print('change 100 :',ch//100)
        ch -= ch // 100 * 100
    if ch >= 50 : 
        print('change 50 :',ch//50)
        ch -= ch // 50 * 50
    if ch >= 20 : 
        print('change 20 :',ch//20)
        ch -= ch // 20 * 20
    if ch >= 10 : 
        print('change 10 :',ch//10)
        ch -= ch // 10 * 10
    if ch >= 5 : 
        print('change 5 :',ch//5)
        ch -= ch // 5 * 5

total = sum_price()
pay = int(input('customer pay : '))
change(total,pay)
