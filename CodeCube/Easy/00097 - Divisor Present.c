#include <bits/stdc++.h>
using namespace std;
int a[100000000],b[100000000],ans[100000000];
int main(){
    int i,j,k,cou=0,cnt=0,n;
    scanf("%d",&n);
    k = sqrt(n);
    a[2] = 1;
    for(i=3;i<=k;i++){
        a[i] = 1;
    }
    for(i=3;i<=n/2;i+=2){
        if(a[i]){
            b[cou] = i;
            cou++;
            for(j=i*i;j<=n/2;j+=i){
                a[j] = 0;
            }
        }
    }
    for(i=0;i<cou;i++){
        if(b[i]%n==0){
            for(j=b[i];j<=n/2;j+=b[i]){
                if(j%n==0){
                    ans[cnt] = j;
                    cnt++;
                }
            }
        }
    }
    sort
    return 0;
}
