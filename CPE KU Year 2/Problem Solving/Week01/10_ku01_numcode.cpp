#include <bits/stdc++.h>
using namespace std;
int x[100],y[100],z[100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,t,i,y1,y2,dis1,dis2;
    cin >> n >> t;
    if(t==2){
        cin >> z[0];
        y[0] = z[0];
    }
    else if(t==1){
        cin >> y[0];
    }
    if(y[0]==n-1) x[0] = 0;
    else if(y[0]==n+1) x[0] = 1;
    for(i=1;i<n;i++){
        if(t==2){
            cin >> z[i];
            y1 = z[i] - y[i-1];
            y2 = z[i] - 2*y[i-1];
            dis1 = abs(y1 - y[i-1]);
            dis2 = abs(y2 - y[i-1]);
            if(dis1 < dis2) y[i] = y1;
            else if(dis2 < dis1) y[i] = y2;
        }
        if(t==1) cin >> y[i];
        if(y[i] > y[i-1]) x[i] = 1;
        else if(y[i] < y[i-1]) x[i] = 0;
    }
    for(i=0;i<n;i++){
        cout << x[i] << "\n";
    }
    return 0;
}