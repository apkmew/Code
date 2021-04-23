#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a >= 65 && a <= 90)
        printf("Big\n");
    else if(a >= 95 && a <= 122)
        printf("Small\n");
    else
        printf("Not Alphabet\n");
    return 0;
}
