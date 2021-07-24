def even_check(num) :
    if num % 2 == 0 : print('The number is even')
    else : print('The number is odd')

def prime_check(num) :
    if num == 2 : print('The number is prime')
    elif num % 2 == 0 or num == 1 : print('The number is not prime')
    else :
        ch = 0 
        for i in range(3,num,2) :
            if num % i == 0 : ch = 1
        if ch == 1 : print('The number is not prime')
        else : print('The number is prime')

num = int(input('Number : '))
even_check(num)
prime_check(num)