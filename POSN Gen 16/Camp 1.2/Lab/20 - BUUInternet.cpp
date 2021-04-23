/*
    TASK: BUUInternet
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[110];
int main()
{
    long long m,n,i,l,r,mid,sum,cou,ma=-1;
    scanf("%lld %lld",&m,&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        ma = max(ma,a[i]);
    }
    l = ma,r = 1000000000000000;
    while(l<r){
        mid = (l+r)/2;
        for(i=0,sum=0,cou=1;i<n;i++){
            if(sum+a[i]>mid)
                cou++,sum=a[i];
            else
                sum += a[i];
        }
        if(cou<=m) r=mid;
        else l=mid+1;
    }
    printf("%lld\n",l);
    return 0;
}
/*
3 6
800
800
800
800
800
800
3 4
800
400
400
700
*/
