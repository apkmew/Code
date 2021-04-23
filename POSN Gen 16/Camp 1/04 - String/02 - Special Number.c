/*
    TASK: Special Number
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int main()
{
    int i=5,x,p,r,s,n;
    while(i--){
        scanf("%d",&x);
        p = x/1000;
        r = (x%1000)/100;
        s = (x%100)/10;
        n = x%10;
        if(x>=1000 && x == p+r*r+s*s*s+n*n*n*n)  printf("Y\n");
        else if(x>=100 && x == r+s*s+n*n*n)  printf("Y\n");
        else if(x>=10 && x == s+n*n)  printf("Y\n");
        else if(x>=1 && x == n)  printf("Y\n");
        else    printf("N\n");
    }
    return 0;
}
/*
89
98
518
815
1676
*/
