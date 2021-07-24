N = 10

def Nplus(num) :
    global N
    N += num

def Nminus(num) :
    global N
    N -= num

def Ntimes(num) :
    global N
    N *= num

def Ndivided(num) :
    global N
    N /= num

Nplus(5)
Nminus(3)
Ntimes(6)
Ndivided(3)
print(f'{N:.0f}')

c = input()
if c == '1':
    Nplus(12)
    print(f'{N:.0f}')
if c == '2':
    Nminus(6)
    print(f'{N:.0f}')
if c == '3':
    Ntimes(2)
    print(f'{N:.0f}')
if c == '4':
    Ndivided(6)
    print(f'{N:.0f}')