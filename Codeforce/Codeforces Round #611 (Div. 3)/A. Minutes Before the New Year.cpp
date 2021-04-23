#include <bits/stdc++.h>
using namespace std;
int main(){
    int q,a,b,h,m;
    scanf("%d",&q);
    while(q--){
        a = 24*60;
        scanf("%d %d",&h,&m);
        b = h*60+m;
        printf("%d\n",a-b);
    }
    return 0;
}

