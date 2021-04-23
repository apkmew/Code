#include <bits/stdc++.h>
using namespace std;
char b[5];
int a[200100];
int main(){
    int i,n,k,mx=-1;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++){
        scanf(" %s",b);
        if(b[0]=='U') a[i]+=1,a[i+k]-=1;
    }
    for(i=1;i<=n;i++){
        a[i] += a[i-1];
        mx = max(a[i],mx);
    }
    printf("%d\n",mx);
    return 0;
}

