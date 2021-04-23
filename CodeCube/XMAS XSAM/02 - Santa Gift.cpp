#include <bits/stdc++.h>
using namespace std;
int main(){
    int q,x,y,z;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d",&x,&y,&z);
        if(x>y && x>z && x-z==1) printf("YES\n");
        else if(y>x && y>z && y-x==1) printf("YES\n");
        else if(z>x && z>y && z-y==1) printf("YES\n");
        else if(x==y && x==z) printf("YES\n");
        else if(x>)
        else printf("NO\n");
    }
    return 0;
}
