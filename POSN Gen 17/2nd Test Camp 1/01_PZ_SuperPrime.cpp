/*
    TASK : PZ_SuperPrime
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int a[10000000],p[1000100],b[10100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int q,n,cou=1,i,j,cnt=0,k;
    a[2] = 1; p[0] = 2;
    for(i=3;i<10000000;i+=2) a[i] = 1;
    k = sqrt(10000000);
    for(i=3;i<k;i+=2){
        if(a[i]){
            //p[cou++] = i;
            //cout << p[cou-1];
            for(j=i*i;j<10000000;j+=i){
                a[j] = 0;
            }
        }
    }
    for(i=3;i<10000000;i+=2){
        if(a[i]) p[cou++] = i;
    }
    //cout << cou;
    for(i=0;cnt<=10000;i++){
        b[cnt++] = p[p[i]-1];
        //cout << cnt << "\n";
    }
    cin >> q;
    while(q--){
        cin >> n;
        cout << b[n-1] << "\n";
    }
    return 0;
}
/*
10
1
2
3
4
5
6
7
8
9
10
*/