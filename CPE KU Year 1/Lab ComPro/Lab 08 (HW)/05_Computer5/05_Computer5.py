f = input('filename: ')
with open(f,'r') as fp :
    total = 0
    for line in fp :
        a = line.strip().lower()
        a = a.replace('.',' ')
        a = a.split()
        total += a.count('computer') + a.count('computers')
        #print(line.strip())
    print(f'Count = {total}')