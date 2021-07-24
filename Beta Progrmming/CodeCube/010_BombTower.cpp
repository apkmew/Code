/*
    Task	: 010_BombTower
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 21 May 2021 [16:05]
    Algo	: Sieve of Eratosthenes
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int a[500100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,j,n,b,k,sum=0;
    cin >> n >> b;
    a[2] = 1;
    k = sqrt(n);
    for(i=3;i<=n;i+=2){
        a[i] = 1;
    }
    for(i=3;i<=k;i+=2){
        if(a[i]){
            for(j=i*i;j<=n;j+=i){
                a[j] = 0;
            }
        }
    }
    for(i=2;i<=n;i++){
        //cout << i << " " << a[i] << "\n";
        sum += a[i];
    }
    cout << max(sum - b,0);
    return 0;
}