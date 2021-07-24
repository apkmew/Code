q = int(input())
o = ['(','[','{']
c = [')',']','}']
while q :
    q -= 1
    a = input()
    st = []
    for x in a :
        if x in o : st.append(x)
        elif x in c :
            if len(st) > 0 :
                if x == ')' and st[len(st)-1] == '(' : st.pop()
                elif x == ']' and st[len(st)-1] == '[' : st.pop()
                elif x == '}' and st[len(st)-1] == '{' : st.pop()
                else : 
                    st.append(x)
                    break
            else :
                st.append(x)
                break
    if len(st) == 0 : print('yes')
    else : print('no')
    st.clear()