f = input('File name: ')
with open(f,'r') as fp :
    for line in fp : 
        s = line.count('.')
        w = len(line.split())
    print(f'There are {s} sentences and {w} words.')