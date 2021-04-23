/*
    TASK: FC Power
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int a[100];
int main()
{
    int q,n,i,j,k,ans;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=2,k=0;i<=10000;i++){
            if(n%i==0){
                for(j=0;n%i==0;n/=i,j++);
                a[k++] = j;
            }
        }
        ans = a[0];
        for(i=1;i<k;i++){
            ans = __gcd(ans,a[i]);
        }
        if(n!=1 || ans==1) printf("NO\n");
        else printf("%d\n",ans);
    }
    return 0;
}
/*
5
1000000
994009
20
59050
524288
*/
