#include<bits/stdc++.h>
using namespace std;
char in[55],out[55],a[110][55][55];
int n,cou=0;
void play1(int i,int j){
    if(i-1<0 || j-1<0) return ;
    if(a[cou][i-1][j]=='Y' && a[cou][i-1][j-1]=='Y'){
        a[cou][i][j-1] = 'Y';
        play1(i,j-1);
    }
}
void play2(int i,int j){
    if(i+1>n-1 || j+1>n-1) return ;
    if(a[cou][i+1][j]=='Y' && a[cou][i+1][j+1]=='Y'){
        a[cou][i][j+1] = 'Y';
        play2(i,j+1);
    }
}
int main(){
    freopen("travel_restrictions_input.txt","r",stdin);
    freopen("travel_restrictions_output.txt","w",stdout);
    int q,i,j;
    scanf("%d",&q);
    memset(a,'N',sizeof a);
    while(q--){
        cou++;
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf(" %c",&in[i]);
        for(i=0;i<n;i++) scanf(" %c",&out[i]);

        if(out[0]=='Y' && in[1]=='Y') a[cou][0][1] = 'Y';
        if(out[n-1]=='Y' && in[n-2]=='Y') a[cou][n-1][n-2] = 'Y';
        a[cou][0][0] = 'Y';
        a[cou][n-1][n-1] = 'Y';
        for(i=1;i<n-1;i++){
            a[cou][i][i] = 'Y';
            if(out[i]=='Y'){
                if(in[i-1]=='Y') a[cou][i][i-1] = 'Y';
                if(in[i+1]=='Y') a[cou][i][i+1] = 'Y';
            }
        }
        for(i=1;i<n;i++){
            if(out[i]=='Y' && in[i-1]=='Y') play1(i,i-1);
        }
        for(i=n-2;i>=0;i--){
            if(out[i]=='Y' && in[i+1]=='Y') play2(i,i+1);
        }
    }
    for(int k=1;k<=cou;k++){
        printf("Case #%d:\n",k);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%c",a[k][i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
