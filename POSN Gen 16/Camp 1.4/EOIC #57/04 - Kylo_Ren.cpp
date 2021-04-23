/*
    TASK: Kylo_Ren
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,a,b,c,i,ans;
    scanf("%d",&q);
    while(q--){
        ans = 0;
        scanf("%d %d %d",&a,&b,&c);
        for(i=a;i<=b;i++){
            if(i%c==0) ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
/*
3
1 10 1
4 9 4
5 17 2
*/
