/*
    TASK: AP_Academy
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int x[1000100],y[1000100];
int main()
{
    int n,q,i,j,ans,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&x[i],&y[i]);
    }
    sort(x,x+n);
    sort(y,y+n);
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&a,&b);
        i = lower_bound(x,x+n,a)-x;
        j = lower_bound(y,y+n,b)-y;
        ans = j+i;
        printf("%d\n",ans);
    }
    return 0;
}
