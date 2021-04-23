/*
    TASK : Peatt Package
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int a[100100][5],mark[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,q,n,k,l,r,mid,sum,cou,ch,mx=-1;
    cin >> q;
    while(q--){
        ch = 1;
        mx = -1;
        cin >> n >> k;
        for(i=0;i<n;i++){
            cin >> a[i][0] >> a[i][1];
            mx = max(mx,a[i][0]);
        } 
        l = mx; r = 1e9;
        while(l<r){
            mid = (l+r)/2;
            //cout << l << " " << mid << " " << r << "\n";
            sum = 0; cou = 1;
            for(i=0;i<n;i++){
                //if(a[i][0]>mid){ cou=2e9; break; }
                if(mark[a[i][1]] == cou){ 
                    sum = a[i][0];
                    //memset(mark,0,sizeof mark);
                    cou++;
                    mark[a[i][1]] = cou;
                    continue;
                }
                sum += a[i][0];
                mark[a[i][1]] = cou;
                if(sum>mid){
                    sum = a[i][0];
                    //memset(mark,0,sizeof mark);
                    cou++;
                    mark[a[i][1]] = cou;
                }
            }
            if(cou>k) l = mid + 1;
            else r = mid;
            if(cou<=k) ch = 0;
            memset(mark, 0, sizeof mark);
        }
        if(ch) cout << "-1\n";
        else cout << l << "\n";
    }
    return 0;
}
/*
2
5 3
10 1
10 2
40 1
30 3
30 4
5 2
10 1
10 2
40 1
30 3
30 1
*/