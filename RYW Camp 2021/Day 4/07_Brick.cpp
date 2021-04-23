/*
    TASK : Brick
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
char a[30][30];
int b[30];
int main(){
    int n,m,i,j,k;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    for(i=0;i<m;i++) a[n][i] = 'O';
    for(j=0;j<m;j++){
        for(i=0;i<n;i++){
            if(a[0][j]=='O'){
                break;
            }
            if(a[i+1][j]=='O'){
                k=0;
                while (b[j]--)
                {
                    if(i-k<0) break;
                    a[i-k][j] = '#';
                    k++;
                }
                break;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
8 5
.....
.....
.OO..
.....
.O...
...O.
.....
.....
1 1 3 2 0
*/