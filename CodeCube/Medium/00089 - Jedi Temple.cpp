#include <bits/stdc++.h>
using namespace std;
int a[1010];
int main(){
    int n,m,i,x,y;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(m--){
        scanf("%d %d",&x,&y);
        x--;
        for(i=0;i<y/2;i++){
            swap(a[(x+i)%n],a[(x+y-i-1)%n]);
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
