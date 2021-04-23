/*
    TASK: 48_Table
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int t[310][5010][5];
struct A{
    int value,x,y;
    bool operator<(const A& o)const{
        if(value!=o.value) return value > o.value;
    }
};
priority_queue<A> h;
A tmp;
int main()
{
    int i,j,r,c,m,k,x,y,z,cnt=0,a;
    scanf("%d %d %d",&r,&c,&m);
    while(m--){
        cnt++;
        scanf("%d",&k);
        if(k==1){
            scanf("%d %d %d",&x,&y,&z);
            t[x][y][0] = z;
            t[x][y][1] = cnt;
            h.push({z,x,y});
        }
        if(k==2){
            scanf("%d %d",&x,&z);
            t[x][0][0] = z;
            t[x][0][1] = cnt;
            h.push({z,x,0});
        }
        if(k==3){
            scanf("%d %d",&x,&y);
            if(t[x][y][1]<t[x][0][1]) t[x][y][0] = t[x][0][0],t[x][y][1] = t[x][0][1];
            printf("%d\n",t[x][y][0]);
        }
        if(k==4){
            if(h.empty()){
                printf("0\n"); continue;
            }
            tmp = h.top();
            if(t[tmp.x][tmp.y][1]<t[tmp.x][0][1]) t[tmp.x][tmp.y][0] = t[tmp.x][0][0],t[tmp.x][tmp.y][1] = t[tmp.x][0][1];
            while(!h.empty() && tmp.value!=t[tmp.x][tmp.y][0]){
                h.pop();
                tmp = h.top();
                if(t[tmp.x][tmp.y][1]<t[tmp.x][0][1]) t[tmp.x][tmp.y][0] = t[tmp.x][0][0],t[tmp.x][tmp.y][1] = t[tmp.x][0][1];
            }
            printf("%d\n",tmp.value);
        }
    }
    return 0;
}
/*
3 3 14
3 1 2
4
2 1 100
2 2 10
2 3 40
4
1 2 1 50
1 2 3 200
4
1 3 3 25
3 3 2
4
1 2 2 60
4
*/
