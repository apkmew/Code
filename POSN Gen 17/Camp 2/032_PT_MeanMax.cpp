/*
    Task	: 032_PT_MeanMax
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 09 May 2021 [20:25]
    Algo	: Binary Search ( Yes -> No )
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
double a[300100],qs[300100],b[300100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,n,k,ch;
    double l,r,mid;
    cin >> n >> k;
    for(i=1;i<=n;i++){
        cin >> a[i];
        qs[i] = qs[i-1] + a[i];
    } 
    l = 1; r = 1e6;
    while(r-l>1e-6){
        ch = 0;
        mid = (l+r+1e-6)/2;
        for(i=1;i<=n;i++){
            b[i] = min(b[i-1],qs[i]-(i*mid));
            if(i-k>=0){
                if(qs[i]-(i*mid)-b[i-k]>1e-6){
                    ch = 1;
                    break;
                }
            }
        }
        if(ch) l = mid;
        else r = mid - 1e-6;
    }
    printf("%.1lf",l);
    //cout << l;
    return 0;
}6