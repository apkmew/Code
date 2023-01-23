/*
    Task	: 04_intsch
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 09 January 2023 [15:07]
    Algo	: Interval Scheduling
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int st,en;
    bool operator<(const A&o) const{
        if(en!=o.en) return en<o.en;
        return st<o.st;
    }
};
A a[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,i,ans=0,now=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i].st >> a[i].en;
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
        if(a[i].st>=now){
            now = a[i].en;
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
/*
4
1 2
1 4
3 4
2 4
*/