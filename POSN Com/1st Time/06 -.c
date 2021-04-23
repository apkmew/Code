#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%2 == 1)
        printf("Odd\n");
    else if(a%2 == 0)
        printf("Even\n");
    return 0;
}
