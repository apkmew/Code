/*
    TASK: Hands
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int a[2010];
int main()
{
    int n,k,i,ans=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n,greater<int>());
    for(i=0;i<n;i+=k){
        ans += a[i];
    }
    printf("%d",ans);
    return 0;
}
