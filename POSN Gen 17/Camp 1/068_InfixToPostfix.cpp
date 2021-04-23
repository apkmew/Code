/*
    TASK : Infix to Postfix
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
stack<char> st;
char a[11000];
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        scanf(" %s",a);
        if(isalnum(a[0])) printf("%s ",a);
        else if(a[0]=='(') st.push(a[0]);
        else if(a[0]=='^') {
            while(!st.empty() && (st.top()=='^')){
                printf("%c ",st.top());
                st.pop();
            }
            st.push(a[0]);
        }
        else if(a[0]=='*' || a[0]=='/'){
            while(!st.empty() && (st.top()=='^'||st.top()=='*'||st.top()=='/')){
                printf("%c ",st.top());
                st.pop();
            }
            st.push(a[0]);
        }
        else if(a[0]=='+' || a[0]=='-'){
            while(!st.empty() && (st.top()!='(')){
                printf("%c ",st.top());
                st.pop();
            }
            st.push(a[0]);
        }
        else if(a[0]==')'){
            while(!st.empty() && st.top()!='('){
                printf("%c ",st.top());
                st.pop();
            }
            st.pop();
        }
    }
    while(!st.empty()){
        printf("%c ",st.top());
        st.pop();
    }
    return 0;
}
/*
13
( ( 35 * 3 ) / ( 6 + 2 ) )
7
( 7 - 2 ) + 4
7
( 2 * 2 ) + 2
*/