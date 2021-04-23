/*
    TASK : Covid League ( Official Sol )
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
    char name[110];
    int p,gd,win,draw,lose;
    bool operator<(const A& o)const{
        if(p!=o.p) return p>o.p;
        else if(gd!=o.gd) return gd>o.gd;
        else if(strcmp(name,o.name)<0) return true;
        else return false;
    }
};
A a[1010];
int b[1010][1010];
char team[110];
int main(){
    freopen("10.in.txt","r",stdin);
    freopen("10.sol.txt","w",stdout);
    int i,j,n,k,q,t,x,gd,p;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf(" %s",a[i].name);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j) continue;
            gd = b[i][j] - b[j][i];
            if(gd>0) p = 3,a[i].win++;
            if(gd==0) p = 1,a[i].draw++;
            if(gd<0) p = 0,a[i].lose++;
            a[i].p += p;
            a[i].gd += gd;
        }
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
        printf("%s %d %d\n",a[i].name,a[i].p,a[i].gd);
    }
    scanf("%d",&q);
    while(q--){
        scanf(" %s",team);
        for(i=0;i<n;i++){
            if(!strcmp(team,a[i].name)){
                printf("%d %d %d %d\n",i+1,a[i].win,a[i].draw,a[i].lose);
                break;
            }
            if(i==n-1) printf("Error\n");
        }
    }
    return 0;
}
/*
5
Liverpool
ManU
Mancity
Asenal
Spurs
0 1 1 1 0
1 0 1 3 2
4 2 0 3 2
4 1 2 0 1
2 3 1 2 0
2
Mancity
Liverrr
4
Barca
Madrid
Bayern
Paris
0 0 4 1
1 0 1 0
0 2 0 1
0 1 1 0
3
Bayern
Barca
Pariss
*/