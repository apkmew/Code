/*
    TASK : reunion
    LANG : CPP
    AUTHOR : Apimook T.
*/
#include <bits/stdc++.h>
using namespace std;
long long a[110][5],b[30100];
int main(){
    long long n,m,i,j,x,y,r,d,ans=0;
    scanf("%lld %lld",&m,&n);
    for(i=0;i<m;i++){
        scanf("%lld %lld",&a[i][0],&a[i][1]);
    }
    for(i=0;i<n;i++){
        scanf("%lld %lld %lld",&x,&y,&r);
        r = r*r;
        for(j=0;j<m;j++){
            d = (x-a[j][0])*(x-a[j][0]) + (y-a[j][1])*(y-a[j][1]);
            if(d<r){
                b[i]++;
            }
        }
    }
    sort(b,b+n);
    for(i=0;i<n;i++){
        if(b[i]==m){
            printf("%lld",ans);
            return 0;
        }
        else if(b[i]>0) ans++;
    }
    printf("%lld",ans);
    return 0;
}
