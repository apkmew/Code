#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y,z,now,fan=0,a,ans=0,mn=1e9,i,b,ch;
    scanf("%d",&n);
    scanf("%d %d %d",&x,&y,&z);
    while(n--){
        scanf("%d",&now);
        if(now>fan){
            a = now - fan;
            ans += a*x;
            ans += now*y;
            fan = now;
        }
        else if(now<fan){
            a = fan - now;
            mn = 1e9;
            for(i=0;i<=a;i++){
                b = 0;
                b += i*z;
                b += (fan-i)*y;
                if(b<mn){
                    mn = b;
                    ch = i;
                }
            }
            //  printf("%d\n",ch);
            fan -= ch;
            ans += mn;
        }
    }
    printf("%d",ans);
    return 0;
}

