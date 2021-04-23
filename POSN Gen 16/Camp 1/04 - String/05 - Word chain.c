/*
    TASK: Word chain
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
#include <string.h>
char a[30100][1010];
int main()
{
    int i,j,l,n,ch=0;
    scanf("%d",&l);
    scanf("%d",&n);
    scanf(" %s",a[0]);
    for(i=1;i<n;i++){
        ch = 0;
        scanf(" %s",a[i]);
        for(j=0;j<l;j++){
            if(a[i][j]!=a[i-1][j]) ch++;
        }
        if(ch>2){
          printf("%s",a[i-1]);
          return 0;
        }
        if(i==n-1) printf("%s",a[n-1]);
    }
    if(n==1)    printf("%s",a[0]);
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
JOIC
JEIP
AEIO
*/
