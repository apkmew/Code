/*
    TASK: Farm Tank
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[100100];
int main()
{
    long long n,m,l,r,mid,i,sum;
    scanf("%lld %lld",&n,&m);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    l=0,r=20000000000000000;
    while(l<r){
        mid = (l+r)/2;
        for(i=0,sum=0;i<n;i++)
            sum += mid/a[i];
        if(sum < m) l = mid + 1;
        else r = mid;
    }
    printf("%lld\n",l);
    return 0;
}
