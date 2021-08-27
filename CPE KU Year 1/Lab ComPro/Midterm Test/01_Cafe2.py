customer = {}

def print_menu() :
    print('Coffee Menu')
    print('0. Finish')
    print('1. Latte = 40')
    print('2. Espresso = 45')
    print('3. Americano = 50')
    print('4. Mocca = 55')
    print('5. Cappuccino = 60')

def order_coffee() :
    orders_dict = {}
    total_price = 0
    menu = ['','Latte','Espresso','Americano','Mocca','Cappuccino']
    price = {'Latte':40,'Espresso':45,'Americano':50,'Mocca':55,'Cappuccino':60}
    while True :
        coffee = int(input('Coffee type: '))
        if coffee == 0 : break
        amount = int(input(f'Amount of {menu[coffee]}: '))
        total_price += price[menu[coffee]] * amount
        if menu[coffee] not in orders_dict : orders_dict[menu[coffee]] = 0
        orders_dict[menu[coffee]] += amount
    print(f'Total price: {total_price}')
    return orders_dict,total_price

def change(total_price, pay) :
    total_change = pay - total_price
    print(f'Customer\'s change: {total_change}')
    c = [1000,500,100,50,20,10,5,1]
    for cc in c :
        if total_change >= cc :
            print(f'Change {cc}: {total_change//cc}')
            total_change -= total_change//cc*cc

def print_receipt(orders_dict, customer_name, total_price) :
    print('--------- receipt ---------')
    print('CPE35 COFFEE SHOP')
    print(f'Customer name: {customer_name}')
    for coffe in orders_dict :
        print(f'{coffe} {orders_dict[coffe]}',end=', ')
    print(f'{total_price} baht')
    print('Thank you')
    print('---------------------------')

def print_report(sales_dict) :
    print('---- Daily Sale Report ----')
    total = 0
    for name in sales_dict :
        print(f'{name} {sales_dict[name]} baht')
        total += sales_dict[name]
    print(f'Total sale: {total} baht')
    print('---------------------------')

sales_dict = {}
while True:
    print_menu()
    customer_name = input("Customer name: ")
    if customer_name == "end day":
        break
    orders_dict, total_price = order_coffee()
    if customer_name not in sales_dict:
        sales_dict[customer_name] = total_price
    else:
        sales_dict[customer_name] += total_price

    pay = int(input("Customer pay: "))
    change(total_price,pay)
    print_receipt(orders_dict, customer_name, total_price)

print_report(sales_dict)