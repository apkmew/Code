/*
 TASK: Roman Conversion
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int main(){
    int n,i,x,a,b,c,d;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        a = x%10;
        b = (x%100)/10;
        c = (x%1000)/100;
        d = x/1000;
        for(i=0;i<d;i++){
            printf("M");
        }
        if(c==9)    printf("CM");
        else if(c>=5){
            printf("D");
            for(i=0;i<c%5;i++)
                printf("C");
        }
        else if(c==4)    printf("CD");
        else if(c!=9 && c!=4){
            for(i=0;i<c%5;i++)
                printf("C");
        }
        if(b==9)    printf("XC");
        else if(b>=5){
            printf("L");
            for(i=0;i<b%5;i++)
                printf("X");
        }
        else if(b==4)    printf("XL");
        else if(b!=9 && b!=4){
            for(i=0;i<b%5;i++)
                printf("X");
        }
        if(a==9)    printf("IX");
        else if(a>=5){
            printf("V");
            for(i=0;i<a%5;i++)
                printf("I");
        }
        else if(a==4)    printf("IV");
        else if(a!=9 && a!=4){
            for(i=0;i<a%5;i++)
                printf("I");
        }
        printf("\n");

    }
	return 0;
}
