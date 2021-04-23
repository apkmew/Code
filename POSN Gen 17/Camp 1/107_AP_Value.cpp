/*
    TASK : AP Value
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long i,q,n,num,sum,ma;
    cin >> q;
    while(q--){
        sum = 0;
        ma = -1;
        cin >> n;
        for(i=1;i<=n;i++){
            cin >> num;
            if(i%2==0){
                sum += num;
                ma = max(ma,num);
            }
            if(i%2==1){
                sum -= num;
            }
        }
        sum -= ma*2;
        cout << sum << "\n";
    }
    return 0;
}
/*
2
3
3 4 8
4
3 1 1 5
*/