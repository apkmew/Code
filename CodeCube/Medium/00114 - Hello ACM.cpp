#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,t,cou=0,ans;
    scanf("%d",&t);
    while(t--){
        cou++;
        scanf("%d %d",&a,&b);
        if(b > a){
            if((b-a)%20==0) b--;
            ans = (b/20) - ((b-a)/20);
            printf("%d")
        }
    }
    return 0;
}
