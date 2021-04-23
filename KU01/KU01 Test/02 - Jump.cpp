#include <bits/stdc++.h>
using  namespace std;
char l[110];
int main(){
    int i,n,a,b=1<<30,c=0,ch=0;
    scanf("%d",&n);
    a = n/2;
    for(i=1;i<=n;i++){
        scanf(" %c",&l[i]);
        if(l[i]=='#' && i<a){
            b = min(b,a-i);
            c = b;
            ch++;
        }
        if(l[i]=='#' && i>a){
            b = min(b,i-a);
            c = b-1;
            ch++;
        }
        if(l[i]=='#' && i==a && n%2==0){
            printf("%d",i);
            return 0;
        }
        if(l[i]=='#' && i==a && n%2==1){
            printf("%d",i+1);
            return 0;
        }
    }
    if(ch>0) printf("%d",a+c);
    else if(ch==0) printf("%d",n);
    return 0;
}
