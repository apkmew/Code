/*
    TASK: Infix to Postfix
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int main()
{
    int p,ct,cn;
    char now;
    scanf("%d",&p);
    while(p--){
        scanf(" %c",&now);
        if(now == '^') cn = 1;
        else if(now == '*' || now =='/') cn = 2;
        else if(now == '+' || now =='-') cn = 3;
        if(isdigit(now)) printf("%c ",now);
        else if(now == '(') st.push(now);
        else if(now == ')'){
            while(st.top()!='('){
                st.pop();
            }
        }
        else{
            if(st.top() == '^') ct = 1;
            else if(st.top() == '*' || st.top() =='/') ct = 2;
            else if(st.top() == '+' || st.top() =='-') ct = 3;
            if(st.empty() || st.top()=='(') st.push(now);
            else if(ct <= cn){
                while(st.top())
            }
        }
    }
    return 0;
}
