/*
    TASK: Molar Mass
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[120];
stack<int> st;
int main()
{
    int q,i,len,ans,ch,ch2,num;
    scanf("%d",&q);
    while(q--){
        ans = 0;
        scanf(" %s",a);
        len = strlen(a);
        for(i=0;i<len;i++){
            if(a[i]=='(') ch++;
            if(a[i]==')'){
                ch--;
                while(st.top()!='('){
                    if(isdigit(st.top())) ch2++,num = st.top()-'0';
                    if(isalpha(st.top())&&ch2>0){
                        ch2 = 0;

                    }
                    st.pop();
                }
            }
            else if(ch > 0){
                if(a[i]=='H') st.push(1);
                if(a[i]=='C') st.push(12);
                if(a[i]=='O') st.push(16);
            }
        }
        printf("%d",ans);
    }
    return 0;
}
