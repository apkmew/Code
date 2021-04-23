#include <bits/stdc++.h>
using namespace std;
int p[100100];
int fr(int i){
    if(p[i]==i) return i;
    return p[i] = fr(p[i]);
}
int main(){
    int i,n,k,q,ca,cb,qa,qb;
    scanf("%d %d %d",&n,&k,&q);
    for(i=1;i<=n;i++) p[i] = i;
    for(i=0;i<k;i++){
        scanf("%d %d",&ca,&cb);
        p[fr(cb)] = fr(ca);
    }
    while(q--){
        scanf("%d %d",&qa,&qb);
        if(fr(qa)==fr(qb)) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}

