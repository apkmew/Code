/*
 TASK: Yin-Yang
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int main(){
    int i,j,n,q;
    scanf("%d",&q);
    while(q--){
    scanf("%d",&n);
        for(i=0;i<n+1;i++){
            for(j=n+1;j>i;j--)
                printf(".");
            for(j=0;j<=i;j++)
                printf("#");
            for(j=0;j<n+2;j++){
                if(i==0 || j==0 || j==n+1)
                    printf("+");
                else
                    printf("#");
            }
            printf("\n");
        }
        for(i=0;i<2;i++){
            for(j=0;j<n+2;j++)
                printf("#");
            for(j=0;j<n+2;j++)
                printf("+");
            printf("\n");
        }
        for(i=0;i<n+1;i++){
            for(j=0;j<n+2;j++){
                if(j==0 || j==n+1 || i==n)
                    printf("#");
                else
                    printf("+");
            }
            for(j=n+1;j>i;j--)
                printf("+");
            for(j=0;j<=i;j++)
                printf(".");
            printf("\n");
        }
    }

	return 0;
}
