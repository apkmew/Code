dis = int(input('Input distance(kilometer): '))
t = 0
while dis :
    if dis <= 6 : 
        t += dis*10
        break
    t += 70
    dis -= 6
print('It takes',t//60,'hours and',t%60,'minutes to reach the destination.')
#It takes 1 hours and 0 minutes to reach the destination.
