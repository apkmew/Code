while True :
    n = int(input('Input Decimal: '))
    hex = ''
    if n == -1 :
        print('Good bye.')
        break
    while n > 0 :
        a = n%16
        if a < 10 : a = str(a)
        elif a >= 10 : a = str(chr(ord('A')+(a-10)))
        hex = a + hex
        n = n//16
    print('Hex: ' + hex)