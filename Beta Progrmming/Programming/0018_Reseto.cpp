/*
    TASK : Reseto
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int a[1010];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,k,i,j,x,cou=0;
    cin >> n >> k;
    //x = sqrt(n);
    for(i=2;i<=n;i+=2){
        a[i] = 1;
        cou++;
        if(cou==k){
            cout << i;
            return 0;
        }
    }
    for(i=3;i<=n;i+=2){
        if(!a[i]){
            for(j=i;j<=n;j+=i){
                if(!a[j]){
                    a[j] = 1;
                    cou++;
                    if(cou==k){
                        cout << j;
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}