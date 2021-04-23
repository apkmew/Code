/*
 TASK: Peatty Robot
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
#include<string.h>
//int a[110][110];
char b[110];
int main(){
    int i,len,x,y;
    scanf(" %s",b);
    len = strlen(b);
    for(i=0;i<len;i++){
        switch(b[i]){
        case 'N' : y++; break;
        case 'S' : y--; break;
        case 'E' : x++; break;
        case 'W' : x--; break;
        case 'Z' : x=0,y=0;
        }
    }
    printf("%d %d",x,y);

	return 0;
}
