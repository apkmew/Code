print('Select menu :')
print('1. add flight data')
print('2. flight data by code')
print('3. show all flight data')
print('4. flight booking')
print('5. show people flight data')
print('6. exit')
flight = {}
passenger = {}
while True :
    opr = int(input('menu : '))

    if opr == 1 : 
        print('Add data : ',end='')
        code,st,arai,en,now,arai2,mx = input().split()
        now,mx = int(now),int(mx)
        flight[code] = [st,en,now,mx]
    
    if opr == 2 :
        code = input('Enter code : ')
        print(f'{code} is from {flight[code][0]} to {flight[code][1]}, number of people booking is {flight[code][2]}/{flight[code][3]}')

    if opr == 3 :
        print('All flight data')
        for x in flight.keys() :
            print(f'{x} is from {flight[x][0]} to {flight[x][1]}, number of people booking is {flight[x][2]}/{flight[x][3]}')
    
    if opr == 4 :
        name = input('Enter your name : ')
        code = input('Enter flight code : ')
        if flight[code][2] == flight[code][3] : print('The flight is full, Sorry')
        else :
            flight[code][2] += 1
            if name not in passenger.keys() : passenger[name] = []
            passenger[name].append(code)
            print('Success')
    
    if opr == 5 :
        name = input('Enter your name : ')
        print(f'{name} is booking flight code = ',end='')
        print(' '.join([str(x) for x in passenger[name]]))

    if opr == 6 :
        print('EXIT!!!!!!!!!!!!!!!')
        break