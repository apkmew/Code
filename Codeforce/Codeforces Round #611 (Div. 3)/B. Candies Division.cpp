#include <bits/stdc++.h>
using namespace std;
int main(){
    int q,k,d,i,a;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&k,&d);
        a = k/d;
        a = a*d;
        //printf("%d\n\n",a);
        for(i=1;i<=k/2;i++){
            if(a==k) break;
            a++;
            //printf("%d\n",a);
        }
        printf("%d\n",a);
    }
    return 0;
}

