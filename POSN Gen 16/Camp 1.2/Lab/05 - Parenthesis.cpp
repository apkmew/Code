/*
    TASK: Parenthesis
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[200];
stack<char> st;
int main()
{
    int i,len,q,ch,o1,o2,c1,c2;
    scanf("%d",&q);
    while(q--){
        ch = 0;
        o1 = 0;
        o2 = 0;
        c1 = 0;
        c2 = 0;
        scanf(" %s",a);
        len = strlen(a);
        while(!st.empty()) st.pop();
        for(i=0;i<len;i++){
            if(a[i]=='(') o1++;
            if(a[i]==')') c1++;
            if(a[i]=='[') o2++;
            if(a[i]==']') c2++;
            if((a[i]==')' || a[i]==']') && st.empty()) ch++;
            else if(a[i]=='(' || a[i]=='[') st.push(a[i]);
            else if(a[i]==')' && st.top()=='(') st.pop();
            else if(a[i]==']' && st.top()=='[') st.pop();
            else if(a[i]==')' && st.top()=='[') ch++;
            else if(a[i]==']' && st.top()=='(') ch++;
        }
        if(ch > 0 || o1!=c1 || o2!=c2) printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}
/*
3
([])
(([()])))
([()[]()])()
*/
