def What(a) :
    a = str(a)
    if a.islower() : return 'Album'
    else : return 'Photobook'

def SStatus() :
    return ty

def RReal(a) :
    if ord(a[0]) == ord(a[-1]) - 1 : return True
    else : return False 

a = input()
ty = What(a)
print(SStatus())
print(RReal(a))
