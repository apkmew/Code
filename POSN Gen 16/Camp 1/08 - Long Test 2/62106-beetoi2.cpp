#include <bits/stdc++.h>
using namespace std;
int bee[25][2];
int main(){
    int n,i;
    bee[0][0] = 1;
    bee[0][1] = 0;
    for(i=1;i<=24;i++){
        bee[i][0] = bee[i-1][0] + bee[i-1][1] + 1;
        bee[i][1] = bee[i-1][0];
    }
    while(1){
        scanf("%d",&n);
        if(n==-1) break;
        printf("%d %d\n",bee[n][0],bee[n][0]+bee[n][1]+1);
    }
    return 0;
}
