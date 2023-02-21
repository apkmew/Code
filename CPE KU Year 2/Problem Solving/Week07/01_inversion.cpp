/*
    Task	: 01_inversion
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 20 February 2023 [13:25]
    Algo	: Divide & Conquer
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
long long a[100100],b[100100],cou=0;
void mergesort(int l,int r){
    if(l==r) return;
    int mid = (l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    int i=l,j=mid+1,k=0;
    while(i<=mid && j<=r){
        if(a[i]<=a[j]) b[k++] = a[i++];
        else{
            b[k++] = a[j++];
            cou += mid-i+1;
        }
    }
    while(i<=mid) b[k++] = a[i++];
    while(j<=r) b[k++] = a[j++];
    for(i=l;i<=r;i++) a[i] = b[i-l];
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,n;
    cin >> n;
    for(i=0;i<n;i++) cin >> a[i];
    mergesort(0,n-1);
    cout << cou << "\n";
    return 0;
}