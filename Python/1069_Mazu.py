st = []
n = int(input())
for i in range(n) :
    c = input()
    if len(st) != 0 and st[len(st)-1] == c : st.pop()
    else : st.append(c)
print(len(st))
l = len(st)
if l ==0 : print('empty')
else : 
    for i in range(l) :
        print(st.pop(),end='')
