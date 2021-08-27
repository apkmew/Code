word = input('Text: ')
word = word.split()
ans,mx,cou = 1,1,1
for i in range(1,len(word)) :
    ch = 0
    for j in range(len(word[i])) :
        if word[i][j] != word[i-1][j] : ch += 1
    if ch > 2 :
        mx = max(mx,cou)
        ans += 1
        cou = 0
    cou += 1
mx = max(mx,cou)
print(f'{ans} Chain(s). Maximum length is {mx} word(s).')
#HEAD HEAP LEAP TEAR REAR BAER BAET BEEP JEEP JOIP JEIP AEIO
#SUN TON BOW GOD LOT KID FAX BAT FAT CAR EAT FEE SEA MAP DRY SPY TAP