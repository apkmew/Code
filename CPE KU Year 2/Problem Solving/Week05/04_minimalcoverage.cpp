/*
    Task	: 04_minimalcoverage
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 24 January 2023 [16:38]
    Algo	: Greedy
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int l,r;
    bool operator<(const A&o) const{
        if(l!=o.l) return l<o.l;
        return r<o.r;
    }
};
A a[100100];
queue<A> ans;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    //freopen("04_minimalcoverage.in","r",stdin);
    //freopen("04_minimalcoverage.out","w",stdout);
    int i,j,q,cou,now,m,ll,rr,mx;
    cin >> q;
    while(q--){
        cou = 0; now = 0;
        cin >> m;
        while(1){
            cin >> a[cou].l >> a[cou].r;
            if(a[cou].l==0 && a[cou].r==0)  break;
            if(a[cou].r < 0) continue;
            cou++;
        }
        sort(a,a+cou);
        //for(i=0;i<cou;i++){
        //    cout << "\t" << a[i].l << " " << a[i].r << "\n";
        //}
        for(i=0;i<cou;){
            if(now >= m) break;
            mx = -1;
            for(j=i;j<cou;j++){
                if(a[j].l > now) break;
                if(a[j].r > mx){
                    mx = a[j].r;
                    ll = a[j].l;
                    rr = a[j].r;
                }
            }
            //cout << "\t\t" << ll << " " << rr << "\n";
            if(mx == -1){
                cout << "0\n";
                goto next;
            }
            now = mx;
            ans.push({ll,rr});
            i = j;
        }
        if(now < m){
            cout << "0\n";
            goto next;
        }
        cout << ans.size() << "\n";
        while(!ans.empty()){
            cout << ans.front().l << " " << ans.front().r << "\n";
            ans.pop();
        }
        next:;
        while(!ans.empty()) ans.pop();
        if(q) cout << "\n";
    }
    return 0;
}
/*
2

1
-1 0
-5 -3
2 5
0 0

1
-1 0
0 1
0 0
*/