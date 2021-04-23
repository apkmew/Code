/*
    TASK: Rabbit Hole
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s,l,r,mid,a,i,num;
    scanf("%lld %lld",&n,&s);
    l = 0, r = n+1;
    while(l<r){
        mid = (l+r)/2;
        num = mid;
        a = 0;
        while(num>0){
            a+=num%10, num/=10;
        }
        if(mid-a>=s) r = mid;
        else l = mid+1;
    }
    if(l>n) printf("0\n-1");
    else printf("%lld\n%lld",n-l+1,n);
    return 0;
}
