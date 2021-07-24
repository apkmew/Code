#include <bits/stdc++.h>
using namespace std;
stack<char> st;
char a[100100];
int main(){
    int len,q,i;
    scanf("%d",&q);
    while (q--)
    {
        scanf(" %s",a);
        len = strlen(a);
        for(i=0;i<len;i++){
            if(a[i]=='(' || a[i]=='[' || a[i]=='{') st.push(a[i]);
            else if(a[i]==')' && st.top()=='(') st.pop();
            else if(a[i]==']' && st.top()=='[') st.pop();
            else if(a[i]=='}' && st.top()=='{') st.pop();
            else st.push(a[i]);
        }
        if(st.empty()) printf("yes\n");
        else printf("no\n");
        while (!st.empty())
        {
            st.pop();
        }
        
    }
    
    return 0;
}