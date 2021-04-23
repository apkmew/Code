#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=n;j>i;j--) printf("-");
        for(j=0;j<2*i+1;j++){
            if(j==0 || j==2*i) printf("+");
            else printf("*");
        }
        for(j=n;j>i;j--) printf("-");
        printf("\n");
    }
    printf("+");
    for(i=1;i<2*n;i++) printf("*");
    printf("+\n");
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++) printf("-");
        for(j=n*2-1;j>2*i;j--){
            if(j==n*2-1 || j==2*i+1) printf("+");
            else printf("*");
        }
        for(j=0;j<=i;j++) printf("-");
        printf("\n");
    }
    return 0;
}