/*
    TASK : FC_Del Row
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
char a[110][110];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,j,r,c,k,ans,ch;
    cin >> r >> c;
    ans = r-1;
    for(j=0;j<r;j++){
        for(i=0;i<c;i++){
            cin >> a[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0,ch=0;j<c;j++){
            for(k=j+1;k<c;k++){
                if(!strcmp(a[j]+i,a[k]+i)){
                    ch = 1;
                }
            }
        }
        if(!ch) ans = i;
    }
    cout << ans;
    return 0;
}
/*
3 4
alfa
beta
zeta
4 6
mrtaxi
mrtaxi
mitaxi
mitezi
*/