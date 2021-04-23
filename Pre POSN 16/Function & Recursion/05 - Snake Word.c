/*
 TASK: Snake Word
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
#include<string.h>
#include<ctype.h>
char a[30][30];
char temp[30][30];
char b[110];
int x[110],y[110];
int z=0,len,ch=0,n,m;
void play(int i,int j,int state){
    if(ch)  return ;
    x[state]=i+1;
    y[state]=j+1;
    if(state==len-1) {
        ch=1;
        for(int c=0;c<len;c++)
            printf("%d %d\n",x[c],y[c]);
        return ;
    }
    char tempp = a[i][j];
    a[i][j] = '.';
    if(j+1 < n && a[i][j+1] == b[state+1])   play(i,j+1,state+1);
    if(j-1 >=0 && a[i][j-1] == b[state+1])   play(i,j-1,state+1);
    if(i+1 < m && a[i+1][j] == b[state+1])   play(i+1,j,state+1);
    if(i-1 >=0 && a[i-1][j] == b[state+1])   play(i-1,j,state+1);
    a[i][j] = tempp;
}
int main(){
    int i,j,q;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf(" %c",&a[i][j]);
            a[i][j] = tolower(a[i][j]);
            temp[i][j]=a[i][j];
        }
    }
    scanf("%d",&q);
    while(q--){
        scanf(" %s",b);
        len = strlen(b);
        for(i=0;i<len;i++){
            b[i] = tolower(b[i]);
        }
        ch=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(a[i][j] == b[0]){
                    //ch=0;
                    play(i,j,0);
                    if(ch)  goto nextt;
                }
            }
        }
        nextt:;
        if(ch==0)   printf("No Matching Word\n");
    }
	return 0;
}
/*
3 5
TAEPE
TULAR
STOPW
2
PEATT
HELLOWORLD
*/
