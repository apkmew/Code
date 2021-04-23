/*
 TASK: Loop practice
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int main(){
    int n,i,a;
    scanf("%d",&n);
    a=n;
    for(i=1;i<=n;i++)
        printf("%d ",i);
    printf("\n");
    n=a;
    while(n--)
        printf("%d ",n+1);
    printf("\n");
    n=a;
    i=2;
    do{
        if(i%2==0 && n!=1)
            printf("%d ",i);
        i++;
    }while(i<=n);
    printf("\n");
    n=a;
    for(i=n;i>0;i--){
        if(i%2==0)
            printf("%d ",i);
    }
    printf("\n");
    n=a;
    while(i<=n){
        if(i%2==1)
            printf("%d ",i);
        i++;
    }
    printf("\n");
    n=a;
    i=n;
    do{
        if(i%2==1)
            printf("%d ",i);
        i--;
    }while(i>0);

	return 0;
}
