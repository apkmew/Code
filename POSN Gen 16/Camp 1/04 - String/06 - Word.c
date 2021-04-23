/*
    TASK: Word
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char a[30][30],b[20];
int main()
{
    int m,n,k,i,j,x,y,len,ch=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf(" %c",&a[i][j]);
            a[i][j] = toupper(a[i][j]);
        }
    }
    scanf("%d",&k);
    while(k--){
        ch = 0;
        scanf(" %s",b);
        len = strlen(b);
        for(i=0;i<len;i++)
            b[i] = toupper(b[i]);
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(b[0]==a[i][j]){
                    if(b[1]==a[i+1][j]){
                        for(x=1;x<len;x++){
                            if(b[x]==a[i+x][j] && x==len-1) ch++;
                            else if(b[x]!=a[i+x][j]) break;
                        }
                    }
                    if(ch>0) goto next;
                    if(b[1]==a[i-1][j]){
                        for(x=1;x<len;x++){
                            if(b[x]==a[i-x][j] && x==len-1) ch++;
                            else if(b[x]!=a[i-x][j]) break;
                        }
                    }
                    if(ch>0) goto next;
                    if(b[1]==a[i][j+1]){
                        for(x=1;x<len;x++){
                            if(b[x]==a[i][j+x] && x==len-1) ch++;
                            else if(b[x]!=a[i][j+x]) break;
                        }
                    }
                    if(ch>0) goto next;
                    if(b[1]==a[i][j-1]){
                        for(x=1;x<len;x++){
                            if(b[x]==a[i][j-x] && x==len-1) ch++;
                            else if(b[x]!=a[i][j-x]) break;
                        }
                    }
                    if(ch>0) goto next;
                    if(b[1]==a[i+1][j+1]){
                        for(x=1;x<len;x++){
                            if(b[x]==a[i+x][j+x] && x==len-1) ch++;
                            else if(b[x]!=a[i+x][j+x]) break;
                        }
                    }
                    if(ch>0) goto next;
                    if(b[1]==a[i+1][j-1]){
                        for(x=1;x<len;x++){
                            if(b[x]==a[i+x][j-x] && x==len-1) ch++;
                            else if(b[x]!=a[i+x][j-x]) break;
                        }
                    }
                    if(ch>0) goto next;
                    if(b[1]==a[i-1][j+1]){
                        for(x=1;x<len;x++){
                            if(b[x]==a[i-x][j+x] && x==len-1) ch++;
                            else if(b[x]!=a[i-x][j+x]) break;
                        }
                    }
                    if(ch>0) goto next;
                    if(b[1]==a[i-1][j-1]){
                        for(x=1;x<len;x++){
                            if(b[x]==a[i-x][j-x] && x==len-1) ch++;
                            else if(b[x]!=a[i-x][j-x]) break;
                        }
                    }
                    if(ch>0) goto next;
                }
            }
        }
        next:;
            printf("%d %d\n",i,j);
    }
    return 0;
}
/*
8 11
ascDEFGhiGG
hTqkComPutk
FayUcompuTm
FcsierMqsrc
bkoArUePeyv
Klcbqwekumk
sreTNIophtb
yUiqlxcnBje
4
Compute
Queue
stack
Pointer
*/
