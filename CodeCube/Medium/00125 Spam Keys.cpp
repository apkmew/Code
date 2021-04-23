#include <bits/stdc++.h>
using namespace std;
char a[100100];
int main(){
    int i,n,ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf(" %c",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]=='S' && a[i+1]=='P' && a[i+2]=='A' && a[i+3]=='C' && a[i+4]=='E' && a[i+5]=='B' && a[i+6]=='A' && a[i+7]=='R') ans++,i+=7;
        else if(a[i]=='S' && a[i+1]=='H' && a[i+2]=='I' && a[i+3]=='F' && a[i+4]=='T') ans++,i+=4;
        else if(a[i]=='Q' || a[i]=='W' || a[i]=='E' || a[i]=='A' || a[i]=='S' || a[i]=='D' || a[i]=='V') ans++;
    }
    printf("%d",ans);
    return 0;
}
