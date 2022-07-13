#include <bits/stdc++.h>
using namespace std;
char a[1000100],b[1000100];
int n,m,i,k,q,pie[1000100],ans=0;
void pietable(char p[]){
    pie[1] = 0, k = 0;
    for(q=2;q<=m;q++){
        while(k>0 && p[k+1]!=p[q])
            k = pie[k];
        if(p[k+1]==p[q]) k++;
        pie[q] = k;
    }
    //return pie;
}
void kmp(char t[],char p[]){
    pietable(p);
    q = 0;
    for(i=1;i<=n;i++){
        while(q>0 && p[q+1]!=t[i])
            q = pie[q];
        if(p[q+1] == t[i]) q++;
        if(q==m){
            ans++;
            q = pie[q];
        }
    }
}
int main(){
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++) scanf(" %c",&a[i]);
    for(i=1;i<=n;i++) scanf(" %c",&b[i]);
    kmp(a,b);
    printf("%d",ans);
    return 0;
}
/*
18 2
helloilovecodecube
ec
*/
