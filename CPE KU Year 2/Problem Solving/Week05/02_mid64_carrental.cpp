/*
    Task	: 02_mid64_carrental
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 24 January 2023 [16:02]
    Algo	: Greedy
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int c,p,w;
};
A a[110];
int b[1010];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int k,n,i,j,mn=2e9,mx=-2e9,now,num,c,p,w;
    cin >> k >> n;
    for(i=0;i<k;i++){
        cin >> a[i].c >> a[i].p >> a[i].w;
    }
    for(i=0;i<n;i++){
        cin >> b[i];
        mx = max(mx,b[i]);
    }
    for(i=0;i<k;i++){
        c = a[i].c; p = a[i].p; w = a[i].w;
        num = 1; now = 0;
        if(mx > w) continue;
        for(j=0;j<n;j++){
            now += b[j];
            if(now > w){
                now = b[j];
                num++;
            }
        }
        //cout << i << " : " << c+num*p << "\n";
        mn = min(mn,c+num*p);
    }
    cout << mn << "\n";
    return 0;
}
/*
4 6
50 100 20
100 10 10
0 1000 1000
10 10 5
5 4 3 3 3 7
*/