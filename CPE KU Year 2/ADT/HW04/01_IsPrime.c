#include <stdio.h>
#include <math.h>
int main(){
    int i,n,r;
    scanf("%d",&n);
    r = sqrt(n);
    if(n == 2){
        printf("1");
        return 0;
    }
    if(n == 1 || n%2==0){
        printf("0");
        return 0;
    }
    for(i=3;i<=r;i+=2){
        if(n%i == 0){
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}
// O(sqrt(n))