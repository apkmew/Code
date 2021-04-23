/*
    TASK: Hero Help
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int x[100100],y[100100];
int main()
{
    int n,k,i,ma=-1,a;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d %d",&x[i],&y[i]);
    }
    sort(x,x+n);
    sort(y,y+n);
    for(i=0;i<n;i++){
        a = lower_bound(x,x+n,x[i]+k)-x;
        ma = max(a-i,ma);
    }
    for(i=0;i<n;i++){
        a = lower_bound(y,y+n,y[i]+k)-y;
        ma = max(a-i,ma);
    }
    printf("%d",ma);
    return 0;
}
/*
3 3
1 2
3 5
5 5
*/
