/*
 TASK: Castle King
 LANG: C++
 AUTHOR: Mew
*/

#include <bits/stdc++.h>
using namespace std;
int now[500100];
int main(){
    long long n,ans=0,i,ma=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&now[i]);
        if(now[i]>ma)   ma=now[i];
    }
    for(i=0;i<n;i++){
        ans += now[i]*2;
    }
    ans += 2*ma;
    ans += n;
    printf("%lld",ans);

	return 0;
}
