/*
    Task	: 1075_Worm
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 05 July 2022 [14:08]
    Algo	: Sorting
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    long long d,c;
    bool operator<(const A& o)const{
        if(c != o.c) return c < o.c;
        return d < o.d;
    }
};
A a[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long i,n,ans1=0,ans2=1;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> a[i].d >> a[i].c;
    }
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++){
        a[i].d += a[i-1].d;
        if((double)a[i].d/a[i].c > (double)ans1/ans2){
            ans1 = a[i].d;
            ans2 = a[i].c;
        }
        //cout << a[i].d << ' ' << a[i].c << ' ' << (double)a[i].d/a[i].c << '\n';
    }
    cout << ans1 << ' ' << ans2;
    return 0;
}
/*
5
3 30
6 10
10 20
7 50
18 70
*/