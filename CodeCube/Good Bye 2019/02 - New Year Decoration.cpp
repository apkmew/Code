#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,x,a,ans,ch=0;
    x = 374;
    scanf("%lld",&n);
    a = n/374;
    ans = a*84;
    n-=a*374;
    if(n%23!=0) ch = 1;
    a = n/23;
    if(ch==1) a++;
    if(a>12) a=12;
    ans += a*7;
    printf("%lld",ans);
    return 0;
}
/*
46
374
500
1122
*/
