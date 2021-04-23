#include <bits/stdc++.h>
using namespace std;
int main(){
    int q,n,i,j,k;
    long long sum=0,now;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=n+i;j++){
                for(k=1;k<=n+i+j;k++){
                    now = (i*j*k)%(i+j+k);
                    sum += now;
                }
            }
        }
        printf("%lld\n",sum);
        sum = 0;
    }
    return 0;
}
