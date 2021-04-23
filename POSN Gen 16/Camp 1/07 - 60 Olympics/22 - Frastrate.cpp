/*
    TASK: Frastrate
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int qs[100100];
int main()
{
    int i,q,n,a,b,c,ans;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&c);
        qs[i] = qs[i-1]+c;
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&a,&b);
        ans = qs[b] - qs[a-1];
        printf("%d\n",ans);
    }
    return 0;
}
