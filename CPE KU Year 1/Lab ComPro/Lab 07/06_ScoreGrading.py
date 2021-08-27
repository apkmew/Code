score = []
while True :
    try : 
        num = int(input('Input student score (or ENTER to finish): '))
        score.append(num)
    except :
        break
mean = sum(score)/len(score)
print(f'Average score is {mean:.2f}')
total = 0
for num in score :
    total += (num-mean)**2
sd = (total/(len(score)-1))**(1/2)
print(f'Standard deviation is {sd:.2f}')
for i in range(len(score)) :
    num = score[i]
    print(f'Score #{i+1}: {num} grade: ',end='')
    if num >= mean + sd*15/10   : print('A')
    elif num >= mean + sd       : print('B+')
    elif num >= mean + sd*5/10  : print('B')
    elif num >= mean            : print('C+')
    elif num >= mean - sd*5/10  : print('C')
    elif num >= mean - sd       : print('D+')
    elif num >= mean - sd*15/10 : print('D')
    else : print('F')