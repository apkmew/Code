/*
    TASK   : Piramid
    AUTHOR : Mew
    SCHOOL : RYW
    LANG   : CPP
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,l,i,ch=0;
    scanf("%d %d",&n,&l);
    for(i=1;i<=n;i++){
        l -= i*i;
        if(l==0) ch = 1;
        if(l<=0) break;
    }
    if(ch==0) printf("%d",n-i+1);
    else printf("%d",n-i);
    return 0;
}
