tel = input()
bad = [20,13,18,80,31,93]
tel = [int(x) for x in tel]
if tel[1] == 8 :
    if sum(tel)%13==0 and sum(tel)<56 : print('Have bad luck.')
    else : print('Have good luck.')
else :
    for i in range(len(tel)-1) :
        if tel[i]*10 + tel[i+1] in bad : 
            print('Have bad luck.')
            exit(0)
    print('Have good luck.')