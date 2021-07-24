a = input()
opr = input()
b = input()
if opr == '*' :
    len1 = len(a)-1
    len2 = len(b)-1
    print(1,end='')
    len1 += len2
    for i in range(len1) :
        print(0,end='')
if(opr=='+') :
    len1 = len(a)
    len2 = len(b)
    if len1 == len2 : 
        print(2,end='')
        for i in range(len1-1) :
            print(0,end='')
    else :
        if len2 > len1 : len1,len2 = len2,len1
        for i in range(len1) :
            if i==0 or i==len1-len2 : print(1,end='')
            else : print(0,end='')
    