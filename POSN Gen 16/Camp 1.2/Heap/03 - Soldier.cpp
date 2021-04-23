/*
    TASK: Soldier
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int id,rnk,in;
    bool operator<(const A& o)const{
        if(rnk != o.rnk) return rnk < o.rnk;
        return in > o.in;
    }
};
priority_queue<A> h;
int main()
{
    int n,r,opr,rnk,id,in=1,ans;
    scanf("%d %d",&n,&r);
    while(n--){
        scanf("%d",&opr);
        if(opr==1){
            scanf("%d %d",&id,&rnk);
            h.push({id,rnk,in});
            in++;
        }
        if(opr==2){
            if(h.empty()) printf("-1\n");
            else{
                ans = h.top().id;
                printf("%d\n",ans);
                h.pop();
            }
        }
    }
    return 0;
}
/*
6 5
2
1 20 4
1 11 4
2
1 3 5
2
*/
