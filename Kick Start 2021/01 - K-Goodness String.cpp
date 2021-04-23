#include <bits/stdc++.h>
using namespace std;
char a[25000];
int main(){
    int q,n,k,i,p,c=1;
    scanf("%d",&q);
    while(q--){
        p = 0;
        scanf("%d %d",&n,&k);
        for(i=1;i<=n;i++){
            scanf(" %c",&a[i]);
            if(i>n/2 && a[i]!=a[n-i+1]) p++;
        }
        printf("Case #%d: %d\n",c++,abs(p-k));
    }
    return 0;
}
