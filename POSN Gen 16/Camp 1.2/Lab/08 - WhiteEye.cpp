/*
    TASK: White Eye
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int main()
{
    int n,m,now,ch=0,cou=0;
    char a;
    scanf("%d %d",&n,&m);
    n += m;
    while(n--){
        scanf(" %c",&a);
        if(a == 'A'){
            scanf("%d",&now);
            if(ch==0){
                st.push(now);
                cou++;
                ch++;
            }
            else{
                while(!st.empty() && now>=st.top()) cou--,st.pop();
                st.push(now);
                cou++;
            }
        }
        if(a == 'B') printf("%d\n",cou);
    }
    return 0;
}
/*
6 2
A 8
A 3
A 2
A 6
A 2
B
A 10
B
*/
