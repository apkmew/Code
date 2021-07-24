/*
    Task	: 031_AP_Bush ( Evergreen )
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 09 May 2021 [17:43]
    Algo	: Binary Search ( No -> Yes )
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
long long a[1010];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long q,n,k,i,l,r,mid,dis,sum;
    cin >> q;
    while(q--){
        cin >> n >> k;
        for(i=1;i<=n;i++) cin >> a[i];
        sort(a+1,a+n+1);
        l = 0; r = 1e9;
        while(l<r){
            mid = (l+r)/2;
            sum = (mid+1)*(mid+1);
            for(i=1;i<n;i++){
                sum += (mid+1)*(mid+1);
                if(a[i]+mid>=a[i+1]-mid){
                    dis = (a[i]+mid)-(a[i+1]-mid)+1;
                    if(dis%2==1) sum -= (((dis-1)/2)+1)*(((dis-1)/2)+1);
                    else sum -= (((dis-2)/2)+1)*(((dis-2)/2)+2);
                }
            }
            if(sum<k) l = mid+1;
            else r = mid;
        }
        cout << l << "\n";
    }
    return 0;
}
/*
3
3 10
0 5 6
3 30
0 6 5
2 10
0 0
*/