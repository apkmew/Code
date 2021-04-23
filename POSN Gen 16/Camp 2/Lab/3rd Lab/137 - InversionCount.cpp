/*
    TASK: Inversion Count
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long n,a[100100],b[100100],ans=0;
void mergesort(long long l,long long r){
    if(l>=r) return ;
    long long mid = (l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    long long i=l,j=mid+1,k=l;
    while(i<=mid && j<=r){
        if(a[i] <= a[j]) b[k++] = a[i++];
        else b[k++] = a[j++],ans+=mid-i+1;
    }
    while(i<=mid) b[k++] = a[i++];
    while(j<=r) b[k++] = a[j++];
    for(i=l;i<=r;i++) a[i] = b[i];
}
int main()
{
    long long i;
    scanf("%lld",&n);
    for(i=0;i<n;i++) scanf("%lld",&a[i]);
    mergesort(0,n-1);
    for(i=0;i<n;i++) printf("%lld ",a[i]);
    printf("%lld\n",ans);
    return 0;
}
/*
5
2 4 1 3 5
*/
