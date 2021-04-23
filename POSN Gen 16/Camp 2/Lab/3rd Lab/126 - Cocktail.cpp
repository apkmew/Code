/*
    TASK: FC_Cocktail
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[100100];
int main()
{
    long long n,now,i;
    scanf("%lld",&n);
    while(n--){
        scanf("%lld",&now);
        a[now]++;
    }
    scanf("%lld",&n);
    now = 0;
    for(i=0;i<=n/2;i++){
        if(a[i]&&a[n-i]){
            if(i==n-i){
                now += (a[i]*(a[i]-1))/2;
                a[i] = 0;
            }
            else{
                now += a[i]*a[n-i];
                a[i] = a[n-i] = 0;
            }
        }
    }
    printf("%lld",now);
    return 0;
}
