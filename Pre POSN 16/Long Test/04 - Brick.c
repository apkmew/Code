/*
 TASK: Brick
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
char a[30][30];
int b[30],c[30];
int main(){
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    memset(c,-1,sizeof c);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='O' && c[j]==-1)
                c[j] = i;
            else if(i==n-1 && c[j]==-1){
                c[j] = i+1;
                //printf("%d",c[j]);
            }
        }
    }
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    for(j=0;j<m;j++){
        for(i=c[j]-1;i>=0;i--){
            if(b[j]>0){
                a[i][j]='#';
                b[j]--;
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
