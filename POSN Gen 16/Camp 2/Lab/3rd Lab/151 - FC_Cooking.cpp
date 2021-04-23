/*
    TASK: FC_Cooking
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int sweet[10],sour[10];
int main()
{
    int n,i,all,a,b,j,ans=1<<30;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d %d",&sweet[i],&sour[i]);
    all = 1<<n;
    for(i=1;i<all;i++){
        for(j=0,a=1,b=0;j<n;j++){
            if(i & (1<<j)){
                a *= sweet[j], b += sour[j];
            }
        }
        ans = min(ans,abs(a-b));
    }
    printf("%d\n",ans);
    return 0;
}
