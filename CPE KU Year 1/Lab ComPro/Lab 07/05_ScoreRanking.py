score = []
while True :
    try : 
        num = int(input('Input student score (or ENTER to finish): '))
        score.append(num)
    except :
        break
score.sort(reverse=True)
for i in range(len(score)) :
    print(f'Rank #{i+1}: {score[i]}')