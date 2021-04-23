/*
    TASK: AP_Magic Hat
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int type,weight,value,day,cnt;
    bool operator<(const A& o)const{
        if(weight!=o.weight) return weight>o.weight;
        if(type!=o.type) return type>o.type;
        if(day!=o.day) return day>o.day;
        if(value!=o.value) return value<o.value;
    }
};
priority_queue<A> h;
A tmp;
struct B{
    int weight,value,day,neww,cnt;
    bool operator<(const B& o)const{
        if(day!=o.day) return day>o.day;
        if(neww!=o.neww) return neww>o.neww;
        if(weight!=o.weight) return weight>o.weight;
        if(value!=o.value) return value>o.value;
    }
};
priority_queue<B> hh;
int ch[100100];
int main()
{
    int n,m,opr,t,w,v,d,i,x,cnt=1;
    scanf("%d %d",&n,&m);
    n += m;
    for(i=0;i<n;i++){
        scanf("%d",&opr);
        if(opr==1){
            scanf("%d",&t);
            if(t==1){
                scanf("%d %d",&w,&v);
                h.push({2,w,v,0,0});
            }
            else if(t==2){
                scanf("%d %d %d",&w,&v,&d);
                h.push({1,w,v,d,0});
            }
            else if(t==3){
                scanf("%d %d %d %d",&w,&v,&d,&x);
                h.push({3,w,v,d,cnt});
                hh.push({w,v,d,x,cnt});
                cnt++;
            }
        }
        while(!hh.empty() && i>=hh.top().day){
            h.push({2,hh.top().neww,hh.top().value,0,hh.top().cnt});
            hh.pop();
        }
        if(opr==2){
            while(1){
                if(h.empty()){
                    printf("0\n"); break;
                }
                else{
                    tmp = h.top();
                    h.pop();
                }
                if(tmp.type==1){
                    if(i>=tmp.day){
                        continue;
                    }
                }
                if(tmp.type==2 && tmp.cnt!=0){
                    if(ch[tmp.cnt]==1) continue;
                    ch[tmp.cnt] = 1;
                }
                if(tmp.type==3){
                    if(ch[tmp.cnt]==1) continue;
                    ch[tmp.cnt] = 1;
                }
                printf("%d\n",tmp.value); break;
            }
        }
    }
    return 0;
}
/*
5 4
1 1 10 20
1 2 30 10 3
2
2
1 3 40 20 7 5
1 1 30 30
1 2 25 50 7
2
2
*/
