#include <bits/stdc++.h>
using namespace std;
int a[1000100];
int main(){
    int n,in,out,i,ans=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&in,&out);
        a[in]++;
        a[out+1]--;
    }
    for(i=1;i<=1000000;i++) a[i]+=a[i-1];
    for(i=1;i<=1000000;i++) ans = max(ans,a[i]);
    printf("%d",ans);
    return 0;
}
/*
5
1 4
3 9
2 8
6 10
5 10
*/
