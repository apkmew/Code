#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a < 0)
        printf("Negative Integer\n");
    if(a == 0)
        printf("Zero Integer\n");
    if(a > 0)
        printf("Positive Integer\n");
    return 0;
}
