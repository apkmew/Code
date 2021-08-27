score = []
while True :
    try : 
        num = int(input('Input student score (or ENTER to finish): '))
        score.append(num)
    except :
        break
for i in range(len(score)) :
    print(f'Score #{i+1}: {score[i]}')
print(f'Average score is {sum(score)/len(score):.2f}')
print(f'Minimum score is {min(score)}')
print(f'Maximum score is {max(score)}')