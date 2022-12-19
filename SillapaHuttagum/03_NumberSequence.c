#include <stdio.h>
int main(){
    int a,b,c,i,cou;
    scanf("%d %d %d",&a,&b,&c);
    for(i=a,cou=0;cou<c;i+=b,cou++){
        printf("%d ",i);
    }
    return 0;
}