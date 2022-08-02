#include <stdio.h>
char st[1001000];
int main(){
    int n,cou=0;
    char a;
    scanf("%d",&n);
    while(n--){
        scanf(" %c",&a);
        if(a=='(' || a=='[' || a=='{'){
            st[cou++]=a;
        }
        else if(a==')' || a==']' || a=='}'){
            if(st[cou-1]=='(' && a==')' || st[cou-1]=='[' && a==']' || st[cou-1]=='{' && a=='}'){
                st[--cou]='\0';
            }
            else{
                printf("0");
                return 0;
            }
        }
    }
    printf("1");
    return 0;
}