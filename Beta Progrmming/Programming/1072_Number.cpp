/*
    Task	: 1072_Number
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 02 November 2021 [17:28]
    Algo	: 
    Status	: Incomplete
*/
#include<bits/stdc++.h>
using namespace std;
int a[500100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,n,m,x,y,k;
    char opr;
    cin >> n >> m;
    for(i=1;i<=n;i++) cin >> a[i];
    while (m--){
        cin >> opr;
        if(opr == 'a'){
            cin >> x >> y;
            swap(a[x],a[y]);
        }
        else if(opr == 'b'){
            cin >> x >> k;
            a[x] = k;
        }
        else if(opr == 'c'){
            cin >> x;
            for(i=1;i<=x/2;i++) swap(a[i],a[x-i+1]);
            for(i=x+1;i<=(n-x+1)/2+x;i++) swap(a[i],a[n-i+x+1]);
        }
        else if(opr == 'q'){
            cin >> x;
            cout << a[x] << '\n';
        }
    }
    
    return 0;
}