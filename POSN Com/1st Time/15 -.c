#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%2 == 0){
        for(int i=n;i>0;i-=2)
            printf("%d\n",i);
    }
    else if(n%2 == 1){
        for(int i=n-1;i>0;i-=2)
            printf("%d\n",i);
    }
    return 0;
}
