a = input()
ch = 0
strlen = len(a)
a = a.upper()
for i in range(strlen//2) :
    if a[i] != a[strlen-i-1] : break
    if i == strlen//2-1 : ch = 1
if ch == 1 :
    for i in range(strlen//4) :
        if a[i] != a[strlen//2-i-1] : break
        if i == strlen//4-1 : ch = 2
if ch == 0 : print('No')
elif ch == 1 : print('Palindrome')
elif ch == 2 : print('Double Palindrome')