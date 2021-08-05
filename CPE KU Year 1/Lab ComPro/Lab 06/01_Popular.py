n = int(input('Input number of words: '))
ans = ''
mx = 0
char = {}
a = []
while n :
    n -= 1
    word = input()
    a.append(word)
    st = word[0]
    if st in char.keys() : char[st] += 1
    else : char[st] = 1
    if char[st] > mx :
        mx = char[st]
        ans = st
print(f'The popular character is {ans}.')
print(f'The character is used in {mx} words.')
for x in a :
    if x[0] == ans : print(x)