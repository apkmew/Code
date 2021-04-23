/*
    TASK: Mafia Node
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int num,score;
    bool operator<(const A& o)const{
        if(score != o.score) return score < o.score;
        return num < o.num;
    }
};
priority_queue<A> h;
int mark[1000100],score[1000100];
int main()
{
    int n,l,r,a,b,i;
    char c;
    scanf("%d %d %d",&n,&l,&r);
    l += r;
    for(i=1;i<=n;i++)
        h.push({i,0});
    while(l--){
        scanf(" %c",&c);
        if(c=='L'){
            scanf("%d %d",&a,&b);
            score[b] += 1;
            h.push({b,score[b]});
        }
        if(c=='C'){
            scanf("%d %d",&a,&b);
            score[b] += 3;
            h.push({b,score[b]});
        }
        if(c=='D'){
            while(mark[h.top().num])
                h.pop();
            mark[h.top().num] = 1;
            //h.pop();
        }
        if(c=='R'){
            while(mark[h.top().num])
                h.pop();
            printf("%d\n",h.top().num);
        }
    }
    return 0;
}
/*
5 9 4
L 2 1
L 3 1
L 1 4
R
L 5 3
D
R
C 2 3
C 4 3
L 5 3
L 5 4
L 2 4
R
*/
