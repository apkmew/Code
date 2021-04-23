/*
    TASK: Castle King
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,n,m,ans=0,ma=-1;
    scanf("%lld",&n);
    m=n;
    while(m--){
        scanf("%lld",&a);
        ans += a;
        if(a>ma) ma=a;
    }
    ans *= 2;
    ans += ma*2;
    ans += n;
    printf("%lld",ans);
    return 0;
}
/*
7
4 6 2 4 3 5 4
*/
