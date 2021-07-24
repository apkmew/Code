police = 0
crime = 100
n = 0
while True :
    n += 1
    dis = int(input('Input distance: '))
    police += dis
    crime += 2**n
    print('Police distance:',police)
    print('Criminal distance:',crime)
    if(police >= crime) : 
        print('Caught him!')
        break
'''
Input distance: 0
Police distance: 0
Criminal distance: 102
'''