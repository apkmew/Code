/*
    Task	: 05_maxlate
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 09 January 2023 [15:29]
    Algo	: Minimize Maximum Lateness
    Status	: Incomplete
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int d,c;
    bool operator<(const A&o) const{
        if(d!=o.d) return d<o.d;
        return c<o.c;
    }
};
A a[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,i,ans=0,now=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i].d >> a[i].c;
        a[i].d += 10;
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
        now += a[i].c;
        if(a[i].d<now){
            ans = max(ans,1000*(now-a[i].d));
        }
    }
    cout << ans << "\n";
    return 0;
}
/*
3
50 10
20 20
10 30
3
50 10
20 10
10 20
*/