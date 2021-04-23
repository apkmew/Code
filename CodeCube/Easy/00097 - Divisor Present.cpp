#include <bits/stdc++.h>
using namespace std;
int a[50000],b[1001000],ans[1010];
int main(){
    int i,j,k,cou=0,cnt=0,n;
    scanf("%d",&n);
    k = sqrt(n);
    a[2] = 1;
    for(i=3;i<=k;i+=2){
        a[i] = 1;
    }
    if(n%2==0){
        b[cou] = 2;
        cou++;
    }
    for(i=3;i<=k;i+=2){
        if(a[i]){
            b[cou] = i;
            cou++;
            for(j=i*i;j<=k;j+=i){
                a[j] = 0;
            }
        }
    }
    for(i=0;i<cou;i++){
        if(n%b[i]==0){
            for(j=b[i];j<=k;j+=b[i]){
                if(n%j==0){
                    ans[cnt] = j;
                    cnt++;
                    if(n/j!=j){
                        ans[cnt] = n/j;
                        cnt++;
                    }
                }
            }
        }
    }
    sort(ans,ans+cnt);
    printf("1 ");
    if(n==1) return 0;
    for(i=0;i<cnt;i++){
        if(ans[i]!=ans[i-1])
            printf("%d ",ans[i]);
    }
    printf("%d",n);
    return 0;
}
