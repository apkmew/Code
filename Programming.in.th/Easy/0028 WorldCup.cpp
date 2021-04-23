#include <bits/stdc++.h>
using namespace std;
struct A{
    int point,ga,sc;
    char team[30];
    bool operator< (const A& o)const{
        if(point!=o.point) return point>o.point;
        else if(ga!=o.ga) return ga>o.ga;
        else if(sc!=o.sc) return sc>o.sc;
    }
};
A a[5];
int score[5][5];
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        scanf(" %s",a[i].team);
    }
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            scanf("%d",&score[i][j]);
        }
    }
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            if(i==j) continue;
            a[i].ga += score[i][j] - score[j][i];
            a[i].sc += score[i][j];
            if(score[i][j]==score[j][i]) a[i].point += 1;
            if(score[i][j]>score[j][i])  a[i].point += 3;
        }
    }
    sort(a+1,a+5);
    for(i=1;i<=4;i++) printf("%s %d\n",a[i].team,a[i].point);
    return 0;
}
