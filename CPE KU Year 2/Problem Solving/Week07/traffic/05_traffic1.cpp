/*
    Task	: 05_traffic1
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 21 February 2023 [10:45]
    Algo	: Divide & Conquer
    Status	: Completed
*/
#include<bits/stdc++.h>
#include "traffic.h"
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,n,k,res,ch,l,r;
    traffic_init(&n,&k);
    for(i=1;i<=n;i++){
        res = traffic_query(i,1,i,n);
        ch = 1;
        if(res >= n) break;
        res = traffic_query(1,i,n,i);
        ch = 2;
        if(res >= n) break;
    }
    l = 1, r = n;
    if(ch == 1){
        while(r-l > 1){
            int mid = (l+r)/2;
            res = traffic_query(i,l,i,mid);
            if(res > mid-l) r = mid;
            else l = mid;
        }
        //cout << i << " " << l << " " << i << " " << r << "\n";
        traffic_report(i,l,i,r, 0,0,0,0);
    }
    else if(ch == 2){
        while(r-l > 1){
            int mid = (l+r)/2;
            res = traffic_query(l,i,mid,i);
            if(res > mid-l) r = mid;
            else l = mid;
        }
        //cout << l << " " << i << " " << r << " " << i << "\n";
        traffic_report(l,i,r,i, 0,0,0,0);
    }
    return 0;
}