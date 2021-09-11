code = '''
def showO(n) :
    for i in range(n) :
        for j in range(n//2+1) :
            print((' '*((n-2*j)//2)+'O'*(2*j+1)+' '*((n-2*j)//2))*n)
        for j in range(n//2) :
            print((' '*(j+1)+'O'*(n-2*(j+1))+' '*(j+1))*n)'''

with open('printO.py','w') as fp :
    fp.write(code)

import printO
n = int(input())
printO.showO(n)