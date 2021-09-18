class py_solution :
    def __init__(self,l) :
        self.l = l
    def is_valid_parentheses(self) :
        st = []
        o = ['(','[','{']
        c = [')',']','}']
        for x in self.l :
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
        if len(st) == 0 : return True
        else : return False

a = input('input: ')
b = py_solution(a)
if b.is_valid_parentheses() : print('valid parentheses')
else : print('invalid parentheses')