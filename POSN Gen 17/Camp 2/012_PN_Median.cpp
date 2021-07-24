/*
    Task	: 012_PN_Median
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 07 May 2021 [22:08]
    Algo	: Heap
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
priority_queue<int> h1;
priority_queue<int> h2;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,a,i,x,y;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> a;
        if(i==1){
            h1.push(a);
            cout << a << ".0\n";
            continue;
        }
        if(i==2){
            if(a>=h1.top()) h2.push(-a);
            else{
                h2.push(-h1.top());
                h1.pop();
                h1.push(a);
            }
            x = h1.top() - h2.top();
            cout << x/2;
            if(x%2==0) cout << ".0\n";
            else cout << ".5\n";
            continue;
        }
        if(i%2==0){
            if(a<h1.top()){
                h2.push(-h1.top());
                h1.pop();
                h1.push(a);
            }
            else{
                h2.push(-a);
            }
            x = h1.top() - h2.top();
            cout << x/2;
            if(x%2==0) cout << ".0\n";
            else cout << ".5\n";
            continue;
        }
        if(i%2==1){
            if(a<=(-h2.top())) h1.push(a);
            else{
                h1.push(-h2.top());
                h2.pop();
                h2.push(-a);
            }
            cout << h1.top() << ".0\n";
            continue;
        }
    }
    return 0;
}
/*
10
1 4 2 5 2 3 1 6 3 4
*/