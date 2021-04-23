#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,n,l,now,old,mx=-1,mn=1<<30;
    scanf("%d %d",&n,&l);
    while(n--){
        old = 0;
        mx = -1;
        for(i=0;i<l;i++){
            scanf("%d",&now);
            mx = max(now-old,mx);
            old  = now;
        }
        mn = min(mn,mx);
    }
    printf("%d",mn);
    return 0;
}
