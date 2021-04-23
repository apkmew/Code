#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a == 89)
        printf("A\n");
    else if(a == 90)
        printf("B\n");
    else if(a == 121)
        printf("a\n");
    else if(a == 122)
        printf("b\n");
    else
        printf("%c\n",a+2);
    return 0;
}
