/*
    Task	: 03_fin65_maxpieces
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 30 March 2023 [14:54]
    Algo	: Quick Sum
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100],qs[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int x,y,n,i,j,q;
    cin >> n >> q;
    for(i=1;i<=n;i++) cin >> a[i];
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++) qs[i] = qs[i-1] + a[i];
    while(q--){
        cin >> x >> y;
        if(y<a[1]) y = a[1]-1;
        i = lower_bound(a+1,a+n+1,y)-a;
        x += qs[i-1];
        j = upper_bound(qs+1,qs+n+1,x)-qs;
        j -= 1;
        //cout << j << " " << i << " ";
        cout << j - i + 1 << "\n";
    }
    return 0;
}
/*
5 4
10
7
9
2
13
20 0
1 0
41 0
20 5
5 10
10
10
10
10
20
100 0
30 0
30 15
100 15
20 10
20 11
30 1
30 21
9 0
19 20
*/