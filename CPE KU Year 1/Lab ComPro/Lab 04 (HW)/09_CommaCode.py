def commaCode(myList) :
    ans = ''
    if len(myList) == 1 :
        ans = myList[0]
        return ans
    for i in range(len(myList)) :
        if i == len(myList)-1 : ans = ans + 'and ' + myList[i]
        else : ans = ans + myList[i] + ', '
    return ans
print('Input: ',end='')
a = [str(x) for x in input().split()]
ans = commaCode(a)
print(ans)