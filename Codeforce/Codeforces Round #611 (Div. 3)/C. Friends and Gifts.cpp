#include <bits/stdc++.h>
using namespace std;
int a[30000],b[30000],mark[30000],c[30000],cou,n;
//a -> answer
//b -> position no number
//c -> no mark number
void play(int i){
    int j;
    //printf("ch");
    if(i==cou){
        for(j=1;j<=n;j++){
            printf("%d ",a[j]);
        }
        exit(0);
    }
    for(j=0;j<n;j++){
        if(c[j]!=b[i] && mark[c[j]]==0){
            mark[c[j]] = 1;
            a[b[i]] = c[j];
            play(i+1);
            mark[c[j]] = 0;
        }
    }
    return;
}
int main(){
    int i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        mark[a[i]] = 1;
        if(a[i]==0) b[cou] = i,cou++;
    }
    cou = 0;
    for(i=1;i<=n;i++){
        if(mark[i]==0) c[cou] = i,cou++;
    }
    //printf("%d\n",cou);
    play(0);
    return 0;
}

