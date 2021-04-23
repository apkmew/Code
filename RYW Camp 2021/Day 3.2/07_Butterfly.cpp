/*
    TASK : Butterfly
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n-1;i++){
        for(j=0;j<=i;j++) printf("*");
        for(j=(n-1)*2-1;j>2*i;j--) printf("-");
        for(j=0;j<=i;j++) printf("*");
        printf("\n");
    }
    for(i=0;i<2*n-1;i++) printf("*");
    printf("\n");
    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--) printf("*");
        for(j=0;j<(i+1)*2-1;j++) printf("-");
        for(j=n-1;j>i;j--) printf("*");
        printf("\n");
    }
    printf("\n");
    return 0;
}