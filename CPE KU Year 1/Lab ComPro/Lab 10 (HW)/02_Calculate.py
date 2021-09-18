class MyMath :
    def __init__(self) :
        pass

    def is_even(self,n) :
        if n%2 == 0 : return True
        else : return False

    def fac(self,n) :
        ans = 1
        for i in range(2,n+1) :
            ans *= i
        return ans

    def is_prime(self,n) :
        ch = True 
        for i in range(2,int(n**(1/2))+1) :
            if n%i==0 : ch = False
            if ch == False : break
        if ch : return True
        else : return False

    def divide_by(self,n,k) :
        if n%k==0 : return True
        else : return False
    
    def ten_to_bi(self,n) :
        a,i,nn = '',1,n
        while i <= n : i *= 2
        i /= 2
        while i >= 1 :
            if nn >= i : 
                a = a + '1'
                nn -= i
            else : a = a + '0'
            i /= 2
        return a

    def ten_to_oct(self,n) :
        a,i,nn = '',1,n
        while 8**i <= n : i += 1
        i -= 1
        while i >= 0 :
            for j in range(8) :
                if 8**i*(j+1) > nn : 
                    a = a + str(j)
                    nn -= 8**i*j
                    break
            i -= 1
        return a

    def ten_to_sixteen(self,n) :
        a,i,nn = '',1,n
        while 16**i <= n : i += 1
        i -= 1
        while i >= 0 :
            for j in range(16) :
                if 16**i*(j+1) > nn : 
                    if j >= 10 : a = a + (chr(65+j-10))
                    else : a = a + str(j)
                    nn -= 16**i*j
                    break
            i -= 1
        return a

    def int_to_roman(self,n) :
        a,nn = '',n
        while nn > 0 :
            if nn >= 1000 : a = a + 'M'; nn -= 1000
            elif nn >= 900 : a = a + 'CM'; nn -= 900
            elif nn >= 500 : a = a + 'D'; nn -= 500
            elif nn >= 400 : a = a + 'CD'; nn -= 400
            elif nn >= 100 : a = a + 'C'; nn -= 100
            elif nn >= 90 : a = a + 'XC'; nn -= 90
            elif nn >= 50 : a = a + 'L'; nn -= 50
            elif nn >= 40 : a = a + 'XL'; nn -= 40
            elif nn >= 10 : a = a + 'X'; nn -= 10
            elif nn >= 9 : a = a + 'IX'; nn -= 9
            elif nn >= 5 : a = a + 'V'; nn -= 5
            elif nn >= 4 : a = a + 'IV'; nn -= 4
            elif nn >= 1 : a = a + 'I'; nn -= 1
        return a

    pi = 0
    for i in range(1,51) :
        if i%2==1 : pi += 4/((2*i) * (2*i+1) * (2*i+2))
        else : pi -= 4/((2*i) * (2*i+1) * (2*i+2))
    pi += 3

my_math = MyMath()
num = int(input("Please Enter Number : "))
k = int(input("Divide by? : "))

if my_math.is_even(num):
    print('This number is even number.')
else:
    print('This number is not even number.')

if num <= 20:
    print(f'factorial is {my_math.fac(num):,.0f}.')
else:
    print('factorial TOO LONG')

if my_math.is_prime(num):
    print('This number is a prime number.')
else:
    print('This number is not a prime number.')

if(my_math.divide_by(num,k)):
    print(f'{num} is divisible by {k}')
else:
    print(f'{num} is not divisible by {k}')

print(f'{num} is {my_math.ten_to_bi(num)} in base 2.')
print(f'{num} is {my_math.ten_to_oct(num)} in base 8.')
print(f'{num} is {my_math.ten_to_sixteen(num)} in base 16.')
print(f'{num} is {my_math.int_to_roman(num)} in roman numeral system.')
print(f'PI is {my_math.pi:.20f}')