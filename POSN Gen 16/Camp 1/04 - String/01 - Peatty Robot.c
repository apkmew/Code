/*
    TASK: Peatty Robot
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
#include <string.h>
char a[110];
int main()
{
    int x=0,y=0,i;
    scanf(" %s",a);
    for(i=0;i<strlen(a);i++){
        if(a[i]=='N') y++;
        if(a[i]=='E') x++;
        if(a[i]=='S') y--;
        if(a[i]=='W') x--;
        if(a[i]=='Z') x=0,y=0;
    }
    printf("%d %d",x,y);
    return 0;
}
