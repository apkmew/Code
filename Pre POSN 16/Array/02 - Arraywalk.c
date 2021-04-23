/*
 TASK: Array Walk
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int a[30][30];
int main(){
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("%d ",a[i][j]);
    }
    printf("\n");
    for(i=n;i>0;i--){
        for(j=m;j>0;j--)
            printf("%d ",a[i-1][j-1]);
    }
    printf("\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d ",a[j][i]);
    }
    printf("\n");
    for(i=m;i>0;i--){
        for(j=n;j>0;j--)
            printf("%d ",a[j-1][i-1]);
    }

	return 0;
}
/*
3 5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
*/
