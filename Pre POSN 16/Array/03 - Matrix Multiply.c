/*
 TASK: Matrix Multiply
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int a[15][15],b[15][15],c[15][15];
int main(){
    int n1,m1,n2,m2,i,j,k,sum=0;
    scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    if(m1 != n2){
        printf("Can't Multiply.");
        return 0;
    }
    for(i=0;i<n2;i++){
        for(j=0;j<m2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n1;i++){
        for(j=0,sum=0;j<m2;j++){
            for(k=0;k<m1;k++){
                sum = sum + a[i][k]*b[k][j];
            }
            printf("%d ",sum);
            sum = 0;
        }
        printf("\n");
    }

	return 0;
}
/*
2 3 3 2
4 5 -2
3 -4 1
-1 2
-5 -3
3 -6
3 3 3 3
1 2 3
4 5 6
7 8 9
1 2 3
4 5 6
7 8 9
*/
