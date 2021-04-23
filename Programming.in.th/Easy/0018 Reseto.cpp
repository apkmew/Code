#include <bits/stdc++.h>
using namespace std;
int a[1010];
int main(){
    int i,j,n,k,cou=0;
    scanf("%d %d",&n,&k);
    for(i=2;i<=n;i+=2){
        cou++;
        a[i] = 1;
        if(cou == k){
            printf("%d",i);
            return 0;
        }
    }
    for(i=3;i<=n;i+=2){
        if(a[i]==0){
            for(j=i;j<=n;j+=i){
                if(a[j]==0) cou++;
                a[j] = 1;
                if(cou==k){
                    printf("%d",j);
                    return 0;
                }
            }
        }
    }
    return 0;
}
