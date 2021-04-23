/*
    TASK: Glass Shoes
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
long long a[100100],b[100100];
int main()
{
    long long i,n,c,l,r,mid,x;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%lld",&b[i]);
    }
    scanf("%lld",&c);
    l = 0, r = 2e6;
    while(l<r){
        mid = (l+r)/2+1;
        x = 0;
        for(i=0;i<n;i++){
            if(a[i]*mid - b[i]>0) x += a[i]*mid - b[i];
        }
        if(x>c) r = mid-1;
        else if(x<=c) l = mid;
    }
    printf("%lld",l);
    return 0;
}
/*
4
5 2 3 1
9 9 9 9
25
*/
