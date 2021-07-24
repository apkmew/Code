a = 1
b = 0
c = 0
s = input()
for i in range(len(s)):
    if s[i]=='A' : a,b = b,a
    if s[i]=='B' : b,c = c,b
    if s[i]=='C' : a,c = c,a
if a == 1 : print('1')
if b == 1 : print('2')
if c == 1 : print('3')