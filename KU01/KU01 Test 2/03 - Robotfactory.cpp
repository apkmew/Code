/*
    TASK   : Robotfactory
    AUTHOR : Mew
    SCHOOL : RYW
    LANG   : CPP
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int h1,h2,b1,b2,x,y,i,j,mx=-1,ans,h11,h22,b11,b22,ii,jj;
    scanf("%d %d %d %d",&h1,&h2,&b1,&b2);
    scanf("%d %d",&x,&y);
    for(i=0;i<=min(h1,b1);i++){
        for(j=0;j<=min(h2,b2);j++){
            if(i+j>x) continue;
            ans = i+j;
            h11 = h1 - i;
            b11 = b1 - i;
            h22 = h2 - j;
            b22 = b2 - j;
            ii = min(h11,b22);
            jj = min(h22,b11);
            if(ii+jj>y) ans += y;
            else ans += ii+jj;
            mx = max(mx,ans);
        }
    }
    printf("%d",mx);
    return 0;
}
