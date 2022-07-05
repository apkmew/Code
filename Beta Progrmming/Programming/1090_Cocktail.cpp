/*
    Task	: 1090_Cocktail
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 05 July 2022 [15:05]
    Algo	: Dynamic Programming
    Status	: Debug
*/
#include<bits/stdc++.h>
using namespace std;
long long arr[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long n,num,a,i,ans=0;
    cin >> n;
    while(n--){
        cin >> num;
        arr[num]++;
    }
    cin >> a;
    for(i=0;i<=a/2;i++){
        if(i==a/2 && a%2==0){
            ans += (arr[i]*(arr[i]-1))/2;
        }
        else{
            ans += arr[i]*arr[a-i];
        }
    }
    cout << ans;
    return 0;
}