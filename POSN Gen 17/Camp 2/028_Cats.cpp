/*
    Task	: 028_Cats
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 09 May 2021 [17:32]
    Algo	: Binary Search
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
long long a[2000100],b[2000100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long i,n,l,r,mid,ch=0,mx=-1,cou;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
        if(i%2==1 && a[i]!=a[i-1]) ch = 1;
        mx = max(mx,a[i]);
    } 
    if(!ch){
        cout << "0";
        return 0;
    }
    l = 1; r = mx;
    while(l<r){
        mid = (l+r)/2;
        ch = 0; cou = 0;
        for(i=0;i<n;i++){
            if(a[i]>mid) b[cou++] = a[i];
        }
        for(i=0;i<cou;i++){
            if(i%2==1 && b[i]!=b[i-1]) ch = 1;
        }
        if(!ch) r = mid;
        else l = mid + 1;
    }
    cout << l;
    return 0;
}