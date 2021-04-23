#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,mx=-1,i,ans;
    for(i=1;i<=5;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        a = a+b+c+d;
        mx = max(mx,a);
        if(a==mx) ans = i;
    }
    printf("%d %d",ans,mx);
    return 0;
}
