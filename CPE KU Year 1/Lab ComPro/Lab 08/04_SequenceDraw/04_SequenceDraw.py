f = input('File name: ')
seq = {}
number = []
ch = 0
with open(f,'r') as fp : 
    for line in fp :
        b = list(line)
        if b[0] == '0' : 
            #print(b[0])
            break
        b.pop()
        if b[0].isdigit() :
            num = int(b[0])
            number.append(num)
            seq[num] = []
        else : seq[num].append(b)
        #print(''.join(b))
    number.sort()
    for i in number : 
        for j in seq[i] :
            print(''.join(j))
#print(seq[1])
#print(seq[2])
#print(seq[3])