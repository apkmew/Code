/*
    Task	: 07_traffic2
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 21 February 2023 [11:52]
    Algo	: Divide & Conquer
    Status	: Completed
*/
#include<bits/stdc++.h>
#include "traffic.h"
using namespace std;
int cou = 0;
struct A{
    int x1,y1,x2,y2;
};
A a[5];
void bsearch(int i,int l,int r,int ch){
    int res,mid;
    if(ch == 1){
        while(r-l > 1){
            mid = (l+r)/2;
            res = traffic_query(i,l,i,mid);
            if(res > mid-l) r = mid;
            else l = mid;
        }
        //cout << i << " " < l << " " << i << " " << r << "\n";
        //traffic_report(i,l,i,r, 0,0,0,0);
        a[cou].x1 = i;
        a[cou].y1 = l;
        a[cou].x2 = i;
        a[cou].y2 = r;
        cou++;
    }
    else if(ch == 2){
        while(r-l > 1){
            mid = (l+r)/2;
            res = traffic_query(l,i,mid,i);
            if(res > mid-l) r = mid;
            else l = mid;
        }
        //cout << l << " " << i << " " << r << " " << i << "\n";
        //traffic_report(l,i,r,i, 0,0,0,0);
        a[cou].x1 = l;
        a[cou].y1 = i;
        a[cou].x2 = r;
        a[cou].y2 = i;
        cou++;
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,n,k,res,ch,l,r;
    traffic_init(&n,&k);
    for(i=1;i<=n;i++){
        res = traffic_query(i,1,i,n);
        ch = 1;
        if(res == n) bsearch(i,1,n,ch);
        else if(res > n){
            l = 1, r = n;
            while(l<r){
                int mid = (l+r)/2;
                res = traffic_query(i,l,i,mid);
                if(res == mid-l+1){
                    l = mid;
                    break;
                }
                else if(res > mid-l+1) r = mid;
                else l = mid;
            }
            //cout << i << " " << l << " " << i << " " << r << "\n";
            bsearch(i,1,l,ch);
            bsearch(i,l,n,ch);
        }
        res = traffic_query(1,i,n,i);
        ch = 2;
        if(res == n) bsearch(i,1,n,ch);
        else if(res > n){
            l = 1, r = n;
            while(l<r){
                int mid = (l+r)/2;
                res = traffic_query(l,i,mid,i);
                if(res == mid-l+1){
                    l = mid;
                    break;
                }
                else if(res > mid-l+1) r = mid;
                else l = mid;
            }
            //cout << l << " " << i << " " << r << " " << i << "\n";
            bsearch(i,1,l,ch);
            bsearch(i,l,n,ch);
        }
    }
    traffic_report(a[0].x1,a[0].y1,a[0].x2,a[0].y2, a[1].x1,a[1].y1,a[1].x2,a[1].y2);
    return 0;
}