#include <stdio.h>
#include <ctype.h>
double st[1001000];
int main(){
    int n,cou=0;
    double x,y;
    char a;
    scanf("%d",&n);
    while(n--){
        scanf(" %c",&a);
        if(isdigit(a)) st[cou++] = a - '0';
        else{
            if(a=='+'){
                y = st[--cou];
                x = st[--cou];
                st[cou++] = x + y;
            }
            else if(a=='-'){
                y = st[--cou];
                x = st[--cou];
                st[cou++] = x - y;
            }
            else if(a=='*'){
                y = st[--cou];
                x = st[--cou];
                st[cou++] = x * y;
            }
            else if(a=='/'){
                y = st[--cou];
                x = st[--cou];
                st[cou++] = x / y;
            }
        }
    }
    printf("%.2lf\n",st[0]);
    return 0;
}