/*
    TASK : YinYang
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
int main(){
    int q,n,i,j;
    scanf("%d",&q);
    while (q--)
    {
        scanf("%d",&n);
        for(i=0;i<n+2;i++){
            for(j=n+1;j>i;j--) printf(".");
            for(j=-1;j<i;j++) printf("#");
            for(j=0;j<n+2;j++){
                if(i==0 || i==n+1 || j==0 || j==n+1) printf("+");
                else printf("#");
            }
            printf("\n");
        }
        for(i=0;i<n+2;i++){
            for(j=0;j<n+2;j++){
                if(i==0 || i==n+1 || j==0 || j==n+1) printf("#");
                else printf("+");
            }
            for(j=n+2;j>i;j--) printf("+");
            for(j=0;j<i;j++) printf(".");
            printf("\n");
        }
    }
    
    return 0;
}