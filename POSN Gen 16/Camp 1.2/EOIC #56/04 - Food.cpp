/*
    TASK: Food
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int mark[20],ans[20],mark2[20],n;
void permu(int state){
    int i;
    if(state == n){
        if(!mark[ans[0]]){
            for(i=0;i<n;i++)
                printf("%d ",ans[i]);
            printf("\n");
        }
        return ;
    }
    for(i=1;i<=n;i++){
        if(!mark2[i]){
            mark2[i] = 1;
            ans[state] = i;
            permu(state+1);
            mark2[i] = 0;
        }
    }
    return ;
}
int main()
{
    int m,now;
    scanf("%d",&n);
    scanf("%d",&m);
    while(m--){
        scanf("%d",&now);
        mark[now] = 1;
    }
    permu(0);
    return 0;
}
/*
4
2
3 2
*/
