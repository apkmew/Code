/*
    TASK : BUU Contest
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
priority_queue<long long> h;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long d,k,n,m,i,num,sum=0;
    cin >> d >> k;
    for(i=0;i<d;i++){
        cin >> n >> m;
        while(n--){
            cin >> num;
            h.push(num-k*i);
        }
        while(m--){
            num = h.top();
            h.pop();
            num += i*k;
            sum += num;
        }
    }
    cout << sum;
    return 0;
}
/*
3 10
5 2
8 4 5 1 10
4 3
14 4 9 14
2 1
20 7
*/