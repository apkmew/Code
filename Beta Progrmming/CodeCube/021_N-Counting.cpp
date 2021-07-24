/*
    Task	: 021_N-Counting
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 21 May 2021 [16:59]
    Algo	: B - Search
    Status	: Incomplete
*/
#include<bits/stdc++.h>
using namespace std;
int a[20100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,n,q,x,y,s,e;
    cin >> n >> q;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    while(q--){
        cin >> x >> y >> s >> e;
        x--; y--;
        e = lower_bound(a+x,a+y,e)-a;
        s = lower_bound(a+x,a+y,s)-a;
        cout << s << " " << e << "\n";
        //cout << e - s + 1 << " ";
    }
    return 0;
}
/*
5 1
2 4 6 8 10
1 5 9 11
*/