/*
 TASK: Word Chain
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
char a[31000][1100];
int main(){
    int l,m,d=0,i,j;
    scanf("%d",&l);
    scanf("%d",&m);
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    if(m==1){
        printf("%s",a[0]);
        return 0;
    }
    for(i=1;i<m;i++){
        for(j=0;j<l;j++){
           if(a[i][j]!=a[i-1][j])   d++;
        }
        if(d>2){
            printf("%s\n",a[i-1]);
            return 0;
        }
        d=0;
    }
    printf("%s",a[m-1]);
	return 0;
}
/*
4
12
HEAD
HEAP
LEAP
TEAR
REAR
BAER
BAET
BEEP
JEEP
JOIP
JEIP
AEIO
*/
