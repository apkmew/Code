#include<stdio.h>

int a[110][110],b[110][110];

int main(){
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
