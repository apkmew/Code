/*
    Task	: 02_probe1d
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 20 February 2023 [13:11]
    Algo	: Divide & Conquer
    Status	: Completed
*/
#include<bits/stdc++.h>
#include "probelib.h"
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n = probe_init();
    int l = 0, r = n-1, mid;
    while(l<r){
        mid = (l+r)/2;
        if(probe_check(l,mid)) r = mid;
        else l = mid+1;
    }
    probe_answer(l);
    return 0;
}