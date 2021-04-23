/*
    TASK: Cats
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[2000100],b[2000100];
int main()
{
    long long i,n,ch=0,l,r,mid,mx=-1,cnt;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i%2==1 && a[i]!=a[i-1]) ch=1;
        mx = max(mx,a[i]);
    }
    if(ch==0) printf("0\n");
    else{
        l = 1, r = mx;
        while(l<r){
            mid = (l+r)/2;
            ch = 0;
            cnt = 0;
            for(i=0;i<n;i++){
                if(a[i]>mid) b[cnt++] = a[i];
            }
            for(i=1;i<cnt;i+=2){
                if(b[i]!=b[i-1]) ch = 1;
            }
            if(ch==0) r = mid;
            else l = mid+1;
        }
        printf("%lld",l);
    }
    return 0;
}
