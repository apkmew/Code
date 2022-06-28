#include<stdio.h>
int main(){
    int x,y;
    char opr;
    scanf("%d %c %d",&x,&opr,&y);
    switch(opr){
        case '+' : printf("%d",x+y); break;
        case '-' : printf("%d",x-y); break;
        case '*' : printf("%d",x*y); break;
        case '/' : printf("%.2lf",(double)x/(double)y); break;
        case '%' : printf("%d",x%y); break;
        default : printf("Unknown Operator");
    }
    return 0;
}