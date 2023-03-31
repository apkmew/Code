/*
    Task	: 01_mid60_buyinpair
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 31 March 2023 [15:31]
    Algo	: Binary Search
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
long long arr[200100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long n,a,b,i,ans=0,x,y;
    cin >> n >> a >> b;
    for(i=0;i<n;i++) cin >> arr[i];
    sort(arr,arr+n);
    for(i=0;i<n;i++){
        x = lower_bound(arr,arr+n,a-arr[i])-arr;
        y = upper_bound(arr,arr+n,b-arr[i])-arr;
        if(x == i) x++;
        if(arr[x] < arr[i]) x = i+1;
        //cout << x << " " << y << "\n";
        if(arr[y-1] < arr[i] || y-1 == i) break;
        ans += (y-x);
    }
    cout << ans << "\n";
    return 0;
}