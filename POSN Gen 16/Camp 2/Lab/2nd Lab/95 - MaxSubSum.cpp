/*
    TASK: Max Sub Sum
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,st,mx=-1e9,sum=0,now,sta=1,ena=1;
    scanf("%d",&n);
    st = en = 1;
    for(i=1;i<=n;i++){
        scanf("%d",&now);
        sum += now;
        if(sum>mx){
            mx = sum;
            ena = i;
            sta = st;
        }
        if(sum<0){
            sum = 0;
            st = i+1;
        }
    }
    printf("%d %d\n",sta,ena);
    printf("%d",mx);
    return 0;
}
