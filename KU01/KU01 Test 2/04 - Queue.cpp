/*
    TASK   : Queue
    AUTHOR : Mew
    SCHOOL : RYW
    LANG   : CPP
*/
#include <bits/stdc++.h>
using namespace std;
int a[100100],mx[100100];
int main(){
    int n,l,i;
    scanf("%d %d",&n,&l);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        mx[i] = max(mx[i-1],a[i-1]);
    }
    while(l--){
        scanf("%d",&i);
        if(a[i]>mx[i]) printf("0\n");
        else printf("%d\n",mx[i]-a[i]+1);
    }
    return 0;
}
