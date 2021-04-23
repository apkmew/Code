/*
    TASK : Star Edge
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
int main(){
    int i,j,n,q;
    scanf("%d",&q);
    while (q--)
    {
        scanf("%d",&n);
        for(i=1;i<=2*n+1;i++){
            for(j=1;j<=2*n+1;j++){
                if(i==1 || j==1 || i==2*n+1 || j==2*n+1 || i%2==1 && j<i || j%2==1 && i<j || i==j && i%2==1) printf("*");
                else printf("-");
            }
            printf("\n");
        }
    }
    return 0;
}