/*
 TASK: Seven Segment
 LANG: C++
 AUTHOR: Mew
*/

#include <bits/stdc++.h>
using namespace std;
char a[20][5][5],b[20][5][5];
int x,y;
int main(){
    int i,j,k,n,m;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                scanf(" %c",&a[i][j][k]);
            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                scanf(" %c",&b[i][j][k]);
            }
        }
    }

	return 0;
}
