/*
    TASK : Array Practice
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
int a[1010];
int main(){
    int n,k,i,ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++){
        if(k==a[i]) ans++;
    }
    for(i=n-1;i>=0;i--) printf("%d ",a[i]);
    printf("\n%d",ans);
    return 0;
}