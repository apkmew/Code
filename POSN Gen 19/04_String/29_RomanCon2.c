#include <stdio.h>
#include <string.h>
char a[100];
int main(){
    int q,len,i,num;
    scanf("%d",&q);
    while(q--){
        num = 0;
        scanf(" %s",a);
        len = strlen(a);
        for(i=0;i<len;i++){
            if(a[i] == 'M')                         num += 1000;
            else if(a[i] == 'C' && a[i+1] == 'M')   num += 900, i++;
            else if(a[i] == 'D')                    num += 500;
            else if(a[i] == 'C' && a[i+1] == 'D')   num += 400, i++;
            else if(a[i] == 'C')                    num += 100;
            else if(a[i] == 'X' && a[i+1] == 'C')   num += 90, i++;
            else if(a[i] == 'L')                    num += 50;
            else if(a[i] == 'X' && a[i+1] == 'L')   num += 40, i++;
            else if(a[i] == 'X')                    num += 10;
            else if(a[i] == 'I' && a[i+1] == 'X')   num += 9, i++;
            else if(a[i] == 'V')                    num += 5;
            else if(a[i] == 'I' && a[i+1] == 'V')   num += 4, i++;
            else if(a[i] == 'I')                    num += 1;
        }
        printf("%d\n",num);
    }
    return 0;
}
/*
3
DCCXXVI
XLIX
MMCDLXXXIX
*/