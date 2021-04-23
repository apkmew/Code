/*
    TASK: 61_Fortress
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int main()
{
    int q=20,m,n,a,ma1,ma2,ma3;
    while(q--){
        scanf("%d %d",&m,&n);
        a = (m-2*n)/2;
        ma1 = m - 4*a;
        ma2 = ma1/2;
        ma3 = ma2+1;
        if(m<2*n)   printf("0\n");
        else if(4*a>m)  printf("0\n");
        else    printf("%d\n",ma3);
    }
    return 0;
}
