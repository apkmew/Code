text = input('Text: ')
sub = input('Substring: ')
text = text.replace(sub,'*')
lt,ls = len(text),len(sub)
text = list(text)
if '*' in text :
    for a in text :
        if a == '*' : print(f'[{sub}]',end='')
        else : print(a,end='')
    exit(0)
i = 0
while i < lt - ls :
    cou,k = 0,-1
    for j in range(ls) :
        if text[i+j] != sub[j] :
            cou += 1
            if cou > 1 : break
            k = j
    if cou <= 1 : 
        if 0 <= k < ls : text[i+k] = '?'
        print('[',end='')
        for j in range(ls) :
            print(text[i+j],end='')
        print(']',end='')
        i += ls
    else : 
        print(text[i],end='')
        i += 1
while i < lt :
    print(text[i],end='')
    i += 1