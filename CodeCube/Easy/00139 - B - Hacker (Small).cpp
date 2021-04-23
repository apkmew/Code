#include <bits/stdc++.h>
using namespace std;
int c[1000100];
vector<vector<int>> a;
vector<int> b;
int main(){
    int i,j,n,m,num,mx=-1,ans;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        b.clear();
        for(j=0;j<m;j++){
            scanf("%d",&num);
            b.push_back(num);
        }
        sort(b.begin(),b.end());
        a.push_back(b);
    }
    for(j=0;j<m;j++){
        mx = -1;
        for(i=0;i<n;i++){
            if(a[i][j]>mx){
                mx = a[i][j];
                num = i;
            }
        }
        c[num]++;
    }
    mx = -1;
    for(i=0;i<n;i++){
        if(c[i]>mx){
            mx = c[i];
            ans = i+1;
        }
    }
    printf("%d\n",ans);
    return 0;
}
