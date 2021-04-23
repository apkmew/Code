#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d = a + b + c;
    if(d >= 80)
        printf("A\n");
    else if(d>=75 && d<=79)
        printf("B+\n");
    else if(d>=70 && d<=74)
        printf("B\n");
    else if(d>=65 && d<=69)
        printf("C+\n");
    else if(d>=60 && d<=64)
        printf("C\n");
    else if(d>=55 && d<=59)
        printf("D+\n");
    else if(d>=50 && d<=54)
        printf("D");
    else
        printf("F");
    return 0;
}
