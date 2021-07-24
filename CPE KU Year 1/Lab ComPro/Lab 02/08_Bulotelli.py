bl = input('Is Bulotelli injured?(y/n) ')
if bl == 'y' : print('Not available')
else :
    bl = input('Is Bulotelli late for the training?(y/n) ')
    if bl == 'n' : print('Starter')
    else :
        bl = input('Did Bulotelli perform well in training?(y/n) ')
        if bl == 'y' : print('Substitute')
        else : print('Not selected')