/*
    Task	: 03_mid65_fakeheight
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 30 January 2023 [14:07]
    Algo	: 
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
long long a[100100],b[100100];
int main(){
    long long n,i,j,total=0,mx=-1,dis1,dis2,mn,a1,a2,before,after;
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
        b[i] = a[i];
        if(i>0) total += abs(a[i] - a[i-1]);
    }
    sort(b,b+n);
    i = lower_bound(b,b+n,a[1]) - b;
    if(i>0 && i<n-1){
        dis1 = abs(b[i-1]-a[1]);
        dis2 = abs(b[i+1]-a[1]);
        mn = min(dis1,dis2);
    }
    else if(i==0){
        mn = abs(b[i+1]-a[1]);
    }
    else if(i==n-1){
        mn = abs(b[i-1]-a[1]);
    }
    mx = max(mx,abs(a[1]-a[0])-mn);
    i = lower_bound(b,b+n,a[n-2]) - b;
    if(i>0 && i<n-1){
        dis1 = abs(b[i-1]-a[n-2]);
        dis2 = abs(b[i+1]-a[n-2]);
        mn = min(dis1,dis2);
    }
    else if(i==0){
        mn = abs(b[i+1]-a[n-2]);
    }
    else if(i==n-1){
        mn = abs(b[i-1]-a[n-2]);
    }
    mx = max(mx,abs(a[n-1]-a[n-2])-mn);
    for(i=1;i<n-1;i++){
        if(a[i-1] < a[i] && a[i] < a[i+1]) continue;
        if(a[i-1] > a[i] && a[i] > a[i+1]) continue;
        j = lower_bound(b,b+n,max(a[i+1],a[i-1])) - b;
        if(j==1){
            dis1 = b[2] - a[i-1]; dis2 = b[2] - a[i+1];
            before = (a[i] - a[i-1]) + (a[i] - a[i+1]);
            after  = (b[2] - a[i-1]) + (b[2] - a[i+1]);
            mx = max(mx,before-after);
            continue;
        }
        if(min(a[i+1],a[i-1]) == b[n-2]){
            dis1 = b[n-3] - a[i-1]; dis2 = b[n-3] - a[i+1];
            before = (a[i-1] - a[i]) + (a[i+1] - a[i]);
            after  = (a[i-1] - b[n-3]) + (a[i+1] - b[n-3]);
            mx = max(mx,before-after);
            continue;
        }
        if(min(a[i-1],a[i+1]) == b[j-1]){
            a1 = b[j-2]; a2 = b[j+1];
            dis1 = a[i-1] - a1; dis2 = a[i+1] - a1;
            before = abs(a[i-1] - a[i]) + abs(a[i+1] - a[i]);
            after  = abs(a[i-1] - a1) + abs(a[i+1] - a1);
            mx = max(mx,before-after);
            dis1 = a[i-1] - a2; dis2 = a[i+1] - a2;
            before = abs(a[i-1] - a[i]) + abs(a[i+1] - a[i]);
            after  = abs(a[i-1] - a2) + abs(a[i+1] - a2);
            mx = max(mx,before-after);
            continue;
        }
        before = abs(a[i-1] - a[i]) + abs(a[i+1] - a[i]);
        after = abs(a[i+1]-a[i-1]);
        mx = max(mx,before-after);
    }
    cout << total-mx << "\n";
    return 0;
}