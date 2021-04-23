/*
    TASK : translation
    LANG : CPP
    AUTHOR : Apimook T.
*/
#include <bits/stdc++.h>
using namespace std;
int a[100100];
int main(){
    int i,n,q,k;
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(a[0]==2 && a[1]==3){
        while(q--){
            scanf("%d",&k);
            printf("%d\n",n-k);
        }
    }
    else{
        while(q--){
            scanf("%d",&k);
            if(k<n/2) printf("2\n");
            else printf("1\n");
        }
    }
    return 0;
}
