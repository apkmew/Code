/*
    TASK   : Flower
    AUTHOR : Mew
    SCHOOL : RYW
    LANG   : CPP
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int l,n,i,ans=0,cou=0;
    scanf("%d %d",&l,&n);
    for(i=1; ;i++){
        if(i%l==0) ans++;
        cou += i;
        if(n<=cou) break;
    }
    if(i%l!=0) ans++;
    printf("%d",ans);
    return 0;
}
