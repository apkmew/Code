/*
    TASK: AP_Value
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,i,a,ma=-1,sum=0;
    scanf("%d",&q);
    while(q--){
        sum = 0; ma = -1;
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d",&a);
            if(i%2==0){
                sum+=a;
                ma = max(a,ma);
            }
            if(i%2==1){
                sum-=a;
            }
        }
        sum -= ma*2;
        printf("%d\n",sum);
    }
    return 0;
}
