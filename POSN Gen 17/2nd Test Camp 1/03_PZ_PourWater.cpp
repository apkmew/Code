/*
    TASK : Pour Water
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int A,B,C,D,ans1,ans2,mark[210][210][210];
void play(int a,int b,int c,int tae){
    int mn;
    if(a<0 || a>A || b<0 || b>B || c<0 || c>C) return ;
    if(mark[a][b][c]) return ;
    mark[a][b][c] = 1;
    mn = min(abs(D-a),min(abs(D-b),abs(D-c)));
    //cout << tae << " " << ans1 << " " << mn << " " << abs(ans2-D) << "\n";
     if(mn<=abs(ans2-D)){
        if(mn==abs(ans2-D) && tae<ans1) ans1 = tae;
        if(mn==abs(D-a)) ans2 = D + D - a;
        if(mn==abs(D-b)) ans2 = D + D - b;
        if(mn==abs(D-c)) ans2 = D + D - c;
        //cout << ans1 << " " << ans2 << "\n";
    }
    play(0,b+a,c,tae+a); play(a-B+b,B,c,tae+B-b); // A -> B
    play(0,b,c+a,tae+a); play(a-C+c,b,C,tae+C-c); // A -> C
    play(a+b,0,c,tae+b); play(A,b-A+a,c,tae+A-a); // B -> A
    play(a,0,c+b,tae+b); play(a,b-C+c,C,tae+C-c); // B -> C
    play(a+c,b,0,tae+c); play(A,b,c-A+a,tae+A-a); // C -> A
    play(a,b+c,0,tae+c); play(a,B,c-B+b,tae+B-b); // C -> B
    return ;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int q;
    cin >> q;
    while(q--){
        cin >> A >> B >> C >> D;
        ans1 = 2e9;
        ans2 = 2e9;
        play(0,0,C,0);
        cout << ans1 << " " << ans2 << " " << "\n";
    }
    return 0;
}
/*
2
30 40 50 30
80 24 200 34
*/