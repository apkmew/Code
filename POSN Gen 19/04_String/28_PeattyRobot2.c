#include <stdio.h>
#include <string.h>
char a[110];
int main(){
    int i,len,dir=0,newdir,j;
    scanf(" %s",a);
    len = strlen(a);
    for(i=0;i<len;i++){
        switch(a[i]){
            case 'N': newdir = 0; break;
            case 'E': newdir = 1; break;
            case 'S': newdir = 2; break;
            case 'W': newdir = 3; break;
            case 'Z': newdir = 0; break;
        }
        if(a[i] == 'Z'){
            printf("Z"); 
            dir = newdir; 
            continue;
        }
        for(j=0;j<((newdir+4)-dir)%4;j++){
            printf("R");
        }
        printf("F");
        dir = newdir;
    }
    return 0;
}
/*
NNEESWZEE
NENENENE
*/