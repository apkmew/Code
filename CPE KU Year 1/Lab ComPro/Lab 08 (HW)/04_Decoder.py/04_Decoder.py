pb = input('Enter publickey filename : ')
pv = input('Enter privatekey filename : ')
pbk = []
pvk = []
with open(pb,'r') as fp :
    for line in fp :
        a = list(line.strip())
        pbk.append(a)
with open(pv,'r') as fp :
    for line in fp :
        a = list(line.strip())
        pvk.append(a)
for i in range(len(pbk)) :
    for j in range(len(pbk[i])) :
        x = ord(pbk[i][j]) + ord(pvk[i][j])
        x = x%26
        if pvk[i][0].isdigit() : print(chr(x+97),end='')
        else : print(chr(x+65),end='')
    print()