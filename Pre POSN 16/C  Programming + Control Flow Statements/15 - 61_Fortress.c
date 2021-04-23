/*
 TASK: 61_Fortress
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int main(){
    int a,m,n,ma1,ma2,ma3,b=20;
    while(b--){
        scanf("%d %d",&m,&n);
        a = (m-2*n)/2;
        ma1 = m-4*a;
        ma2 = ma1/2;
        ma3 = ma2+1;
        if(m<2*n)   printf("0\n");
        else if(4*a>m)  printf("0\n");
        else printf("%d\n",ma3);
    }

	return 0;
}
// 40 15 -> 11