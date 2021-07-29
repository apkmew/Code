n = int(input('How many animals are there in the zoo? : '))
mp = dict()
while n :
    n -= 1
    animal,food = input().split()
    mp[animal] = food
q = int(input('How many questions do you want to ask? : '))
while q :
    q -= 1
    animal = input()
    if animal in mp.keys() :
        print(mp[animal])
    else :
        print('Sorry we don\'t have that animal.')