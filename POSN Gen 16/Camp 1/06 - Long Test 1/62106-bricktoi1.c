#include <stdio.h>
char a[30][30];
int b[30];
int main(){
    int i,j,n,m,k;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++){
        a[n][i] = 'O';
    }
    for(j=0;j<m;j++){
        for(i=0;i<n;i++){
            if(a[i][j]=='O'){
                for(k=1;k<=b[j];k++){
                    a[i-k][j]='#';
                }
                break;
            }
            if(i==n-1){
                for(k=0;k<b[j];k++){
                    a[i-k][j]='#';
                }
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
8 5
.....
.....
.OO..
.....
.O...
...O.
.....
.....
1 1 3 2 0
*/
