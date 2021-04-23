/*
    TASK : Loop Practice
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++) printf("%d ",i); printf("\n");
    for(i=n;i>0;i--) printf("%d ",i); printf("\n");
    for(i=2;i<=n;i+=2) printf("%d ",i); printf("\n");
    for(i=n/2*2;i>1;i-=2) printf("%d ",i); printf("\n");
    for(i=1;i<=n;i+=2) printf("%d ",i); printf("\n");
    if(n%2==0) n--;
    for(i=n;i>0;i-=2) printf("%d ",i);
    return 0;
}