/*
    TASK   : Bird
    AUTHOR : Mew
    SCHOOL : RYW
    LANG   : CPP
*/
#include <bits/stdc++.h>
using namespace std;
int a[1010];
int main(){
    int n,i,ans=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]) ans++;
    }
    printf("%d",ans);
    return 0;
}
