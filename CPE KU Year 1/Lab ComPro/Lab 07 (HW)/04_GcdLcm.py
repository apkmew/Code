def gcd(a,b) :
    if a%b == 0 : return b
    return gcd(b,a%b)

a = int(input('a : '))
b = int(input('b : '))
print(f'GCD : {gcd(a,b)}')
print(f'LCM : {a*b//gcd(a,b)}')