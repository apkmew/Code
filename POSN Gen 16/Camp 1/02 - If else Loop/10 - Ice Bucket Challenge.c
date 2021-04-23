/*
    TASK: Ice Bucket Challenge
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int main()
{
    int t,g,k,ans=0;
    scanf("%d",&t);
    while(t--){
        ans = 0;
        scanf("%d %d",&g,&k);
        while(g>100){
            g = g-(k-1)*100-10;
            ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
