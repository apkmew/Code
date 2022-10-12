#include <stdio.h>
#include <string.h>
char a[110];
int main(){
    int i,len,x=0,y=0;
    scanf(" %s",a);
    len = strlen(a);
    for(i=0;i<len;i++){
        switch(a[i]){
            case 'N': y++; break;
            case 'S': y--; break;
            case 'E': x++; break;
            case 'W': x--; break;
            case 'Z': x=0; y=0; break;
        }
    }
    printf("%d %d",x,y);
    return 0;
}
/*
NNEESWZEE
NNEESW
NWSSSSE
*/