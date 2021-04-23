#include <bits/stdc++.h>
using namespace std;
stack<char> st;
char a[1010];
int main(){
    int i,len;
    scanf(" %s",a);
    len = strlen(a);
    for(i=0;i<len;i++){
        if(a[i]=='(' || a[i]=='[' || a[i]=='{') st.push(a[i]);
        else{
            if(a[i]==')' && st.top()=='(') st.pop();
            else if(a[i]==']' && st.top()=='[') st.pop();
            else if(a[i]=='}' && st.top()=='{') st.pop();
        }
    }
    if(st.empty()) printf("True\n");
    else printf("False");
    return 0;
}