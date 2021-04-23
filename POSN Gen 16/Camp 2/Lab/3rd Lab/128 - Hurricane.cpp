/*
    TASK: Hurricane
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
stack<pair<int,int> > st;
pair<int,int> a;
int main()
{
    int n,now;
    long long ans=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&now);
        while(!st.empty() && now>st.top().first){
            ans += st.top().second;
            st.pop();
        }
        if(!st.empty() && now==st.top().first){
            ans += st.top().second;
            a = st.top();
            a.second++;
            st.pop();
        }
        else a = {now,1};
        if(!st.empty()) ans++;
        st.push(a);
    }
    printf("%lld",ans);
    return 0;
}
