/*
    TASK: Velvet Sell
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <bits/stdc++.h>
using namespace std;
int a[100100];
int main()
{
    int i,n,q,x;
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    while(q--){
        scanf("%d",&x);
        i = lower_bound(a,a+n,x)-a;
        printf("%d\n",i);
    }
    return 0;
}
