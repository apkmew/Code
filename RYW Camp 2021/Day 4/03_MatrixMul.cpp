/*
    TASK : Matrix Multiplication
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
int a[15][15],b[15][15],c[15][15];
int main(){
    int n1,m1,n2,m2,i,j,k;
    scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n2;i++){
        for(j=0;j<m2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(m1!=n2) printf("Can\'t Multiply.");
    else{
        for(i=0;i<n1;i++){
            for(j=0;j<m2;j++){
                for(k=0;k<m1;k++){
                    c[i][j] += a[i][k]*b[k][j];
                }
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}