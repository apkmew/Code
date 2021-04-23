#include <bits/stdc++.h>
using namespace std;
double a[10100],b[101000];
int main(){
    int n,m,i,cou=0;
    double now,ans,c;
    scanf("%d %d",&n,&m);
    c = int(m);
    for(i=1;i<=n;i++){
        scanf("%lf",&now);
        a[i] = now + a[i-1];
    }
    i=1;
    while(i+m-1<=n){
        cou++;
        b[i] = (a[i+m-1]-a[i-1])/c;
        i++;
    }
    printf("%d\n",cou);
    for(i=1;i<=cou;i++){
        printf("%lf ",b[i]);
    }
    return 0;
}
/*
10 2
1 2 3 4 5 6 7 8 9 10
10 5
1 2 3 4 5 6 7 8 9 10
*/
