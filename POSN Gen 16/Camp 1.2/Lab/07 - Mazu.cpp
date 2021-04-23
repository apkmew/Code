/*
    TASK: Mazu
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
stack<char> st;
int main()
{
    int n,cou=1;
    char a;
    scanf("%d",&n);
    scanf(" %c",&a);
    st.push(a);
    n--;
    while(n--){
        scanf(" %c",&a);
        if(st.empty()) cou++,st.push(a);
        else if(a == st.top()) cou--,st.pop();
        else cou++,st.push(a);
    }
    printf("%d\n",cou);
    while(!st.empty()){
        printf("%c",st.top());
        st.pop();
    }
    if(cou==0) printf("empty");
    return 0;
}
