/*
    Task	: 03_age_sort
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 20 February 2023 [13:44]
    Algo	: Divide & Conquer
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int a[2001000],b[2001000];
void mergesort(int l,int r){
    if(l==r) return;
    int mid = (l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    int i=l,j=mid+1,k=0;
    while(i<=mid && j<=r){
        if(a[i]<=a[j]) b[k++] = a[i++];
        else b[k++] = a[j++];
    }
    while(i<=mid) b[k++] = a[i++];
    while(j<=r) b[k++] = a[j++];
    for(i=l;i<=r;i++) a[i] = b[i-l];
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    //freopen("age_sort.in","r",stdin);
    //freopen("age_sort.out","w",stdout);
    int n,i;
    while(1){
        cin >> n;
        if(n==0) break;
        for(i=0;i<n;i++) cin >> a[i];
        mergesort(0,n-1);
        for(i=0;i<n;i++){
            cout << a[i];
            if(i!=n-1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}