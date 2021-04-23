#include <bits/stdc++.h>
using namespace std;
char a[100100];
int main(){
    int n,i,ch=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) scanf(" %c",&a[i]);
    for(i=1;i<=n;i++){
        if(a[i]=='X'){
            if(a[i-1]!='B' && a[i+1]!='B') a[i]='B';
            else if(a[i-1]!='W' && a[i+1]!='W') a[i]='W';
            else if(a[i-1]!='G' && a[i+1]!='G') a[i]='G';
            else ch++;
        }
        if(a[i]==a[i+1] || a[i]==a[i-1]) ch++;
    }
    if(ch > 0) printf("No Answer\n");
    else{
        for(i=1;i<=n;i++) printf("%c",a[i]);
    }
    return 0;
}
