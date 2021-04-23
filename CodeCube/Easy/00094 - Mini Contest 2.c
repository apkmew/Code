#include<stdio.h>
int main(){
    int n,ans = 0;
    char a,o;
    scanf("%d",&n);
    while(n--){
        scanf(" %c",&a);
        if(a == o)  ans = 1;
        o = a;
    }
    if(ans == 0)    printf("Accepted");
    if(ans == 1)    printf("Wrong Answer");
    return 0;
}
/*
5
WBWBW
Accepted
10
WBGWBGGBWB
Wrong Answer
8
WBGBWGWB
*/
