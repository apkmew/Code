/*
    TASK   : under
    AUTHOR : Mew
    SCHOOL : RYW
    LANG   : CPP
*/
#include <bits/stdc++.h>
using namespace std;
pair<double,double> a[210];
int main(){
    double l,n,i;
    int j,cou,mx=-1;
    scanf("%lf %lf",&l,&n);
    for(j=0;j<n;j++){
        scanf("%lf %lf",&a[j].first,&a[j].second);
    }
    for(i=0.5;i<=l;i+=1){
        cou = 0;
        for(j=0;j<n;j++){
            if(i>a[j].first && i<a[j].second) cou++;
        }
        mx = max(mx,cou);
    }
    printf("%d",mx);
    return 0;
}
