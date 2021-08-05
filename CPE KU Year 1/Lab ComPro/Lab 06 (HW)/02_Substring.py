a = input('Text: ')
sub = input('Substring: ')
if sub not in a : 
    print('Not found')
    exit(0)
a = a.replace(sub,'*')
for x in a :
    if x == '*' : print(f'[{sub}]',end='')
    else : print(x,end='')