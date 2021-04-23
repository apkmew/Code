#include <bits/stdc++.h>
using namespace std;
int a[1000100];
int main(){
    int n,q,num,x,y;
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        a[i] = a[i-1]+num;
    }
    while(q--){
        scanf("%d %d",&x,&y);
        printf("%d",a[y]-a[x-1]);
    }
    return 0;
}

