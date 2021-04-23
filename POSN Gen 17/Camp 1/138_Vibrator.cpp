/*
    TASK : Vibrator
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int a[50100] = {1};
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int c,n,i,en,sum=0;
    cin >> c >> n;
    while(n--){
        cin >> en;
        for(i=c;i>=en;i--){
            if(a[i-en]) a[i] = 1;
        }
    }
    for(i=c;i>=1;i--){
        if(a[i]){
            cout << i;
            return 0;
        }
    }
    //cout << sum;
    return 0;
}
/*
7 3
2
6
5
*/