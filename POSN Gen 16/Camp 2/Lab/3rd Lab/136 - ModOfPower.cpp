/*
    TASK: Mod of Power
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long ModPow(long long a,long long b,long long c){
    if(b==1) return a%c;
    long long t = ModPow(a,b/2,c);
    if(b%2==0) return (t*t)%c;
    else return (t*t*a)%c;
}
int main()
{
    long long q,a,b,c;
    scanf("%lld",&q);
    while(q--){
        scanf("%lld %lld %lld",&a,&b,&c);
        printf("%lld\n",ModPow(a,b,c));
    }
    return 0;
}
