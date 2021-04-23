/*
    TASK: Van Booking 2
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int num,t;
    bool operator<(const A& o)const{
        if(t != o.t) return t > o.t;
        return num > o.num;
    }
};
priority_queue<A> h;
int main()
{
    int num,j,n,k,i;
    scanf("%d %d",&n,&k);
    for(i=1;i<=k;i++){
        h.push({i,0});
    }
    while(n--){
        scanf("%d",&j);
        j += h.top().t;
        num = h.top().num;
        printf("%d\n",num);
        h.pop();
        h.push({num,j});
    }
    return 0;
}
/*
6 3
3
1
2
2
2
1
*/
