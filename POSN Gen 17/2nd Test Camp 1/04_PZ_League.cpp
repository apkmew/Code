/*
    TASK : PZ_League
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
    int i,j,n,k,q,t,x,gd,p;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i].name;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> b[i][j];
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
        cout << a[i].name << " " << a[i].p << " " << a[i].gd << "\n";
    }
    cin >> q;
    while(q--){
        cin >> team;
        for(i=0;i<n;i++){
            if(!strcmp(team,a[i].name)){
                cout << i+1 << " " << a[i].win << " " << a[i].draw << " " << a[i].lose << "\n"; 
                break;
            }
            if(i==n-1) cout << "Error\n";
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