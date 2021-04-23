/*
    TASK: Peatt Market
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
priority_queue<int> h;
int main()
{
    int q,m,n,k,opr,p,tmp,num;
    long long ans;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d",&n,&m,&k);
        tmp=0,ans=0;
        while(n--){
            scanf("%d",&num);
            h.push(-num);
        }
        while(m--){
            scanf("%d",&opr);
            if(opr==1){
                scanf("%d",&num);
                h.push(tmp-num);
            }
            else if(opr==2){
                tmp += k;
            }
            else if(opr==3){
                if(!h.empty())
                    h.pop();
            }
        }
        printf("%d ",h.size());
        while(!h.empty())
            ans += h.top()*-1+tmp,h.pop();
        printf("%lld\n",ans);
    }
    return 0;
}
/*
2
5 6 20
100 150 130 200 1000
3
3
1 160
2
1 158
3
2 6 100
10 20
2
2
3
3
1 100
2
*/
