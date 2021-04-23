/*
    TASK: Coca Land 2
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int type,beauty,day,newb;
    bool operator<(const A& o)const{
        if(beauty != o.beauty) return beauty > o.beauty;
        return type > o.type;
    }
};
priority_queue<A> h;
int main()
{
    int i,p,opr,a,b,c;
    A temp;
    scanf("%d",&p);
    for(i=0;i<p;i++){
        scanf("%d",&opr);
        if(opr==1){ //type 2
            scanf("%d %d",&a,&b);
            h.push({2,a,b,0});
        }
        if(opr==2){ //type 3
            scanf("%d",&a);
            h.push({3,a,0,0});
        }
        if(opr==3){ //type 1
            scanf("%d %d %d",&a,&b,&c);
            h.push({1,a,b,c});
        }
        if(opr==4){
            while(1){
                if(h.empty()){
                    printf("GREAN\n"); break;
                }
                temp = h.top();
                h.pop();
                if(temp.type==2 && i>=temp.day) continue;
                if(temp.type==1 && i>=temp.day){
                    temp.beauty = temp.newb;
                    temp.day = 100001;
                    h.push(temp);
                    continue;
                }
                printf("%d\n",temp.beauty); break;
            }
        }
    }
    return 0;
}
/*
11
2 5
4
4
1 10 5
2 15
4
3 20 8 40
2 30
2 45
4
4
*/
