/*
    TASK: FC_LoveNum
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long cnt[1030];
char a[30];
int main()
{
    long long n,len,ans=0,i,j,mask;
    scanf("%lld",&n);
    while(n--){
        scanf(" %s",a);
        len = strlen(a);
        mask = 0;
        for(i=0;i<len;i++){
            mask |= (1<<(a[i]-'0'));
        }
        cnt[mask]++;
    }
    for(i=0;i<1024;i++){
        for(j=i+1;j<1024;j++){
            if(i&j){
                ans += cnt[i]*cnt[j];
            }
        }
    }
    for(i=0;i<1024;i++) ans += cnt[i]*(cnt[i]-1)/2;
    printf("%lld\n",ans);
    return 0;
}
