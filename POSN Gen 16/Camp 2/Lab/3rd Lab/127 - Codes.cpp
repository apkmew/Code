/*
    TASK: FC_Codes
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[1010];
int main()
{
    int i,j,n;
    long long ans=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&j);
        a[j]++;
    }
    for(i=0;i<1000;i++){
        for(j=i;j<1000;j++){
            if(i==j) ans += a[i]*(a[i]-1)/2;
            else if(i%10==j%10 || i/100==j/100 || (i/10)%10==(j/10)%10)
                ans += a[i]*a[j];
        }
    }
    printf("%lld",ans);
    return 0;
}
