/*
    TASK: BUU Contest
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
priority_queue<long long> h;
int main()
{
    long long d,k,n,b,ans=0,p,i;
    scanf("%lld %lld",&d,&k);
    for(i=0;i<d;i++){
        scanf("%lld %lld",&n,&b);
        while(n--){
            scanf("%lld",&p);
            h.push(p-k*i);
        }
        while(b--){
            ans += h.top()+k*i;
            h.pop();
        }
    }
    printf("%lld",ans);
    return 0;
}
/*
3 10
5 2
8 4 5 1 10
4 3
14 4 9 14
2 1
20 7
*/
