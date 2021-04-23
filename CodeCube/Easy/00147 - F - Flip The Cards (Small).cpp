#include <bits/stdc++.h>
using namespace std;
int a[50100][5],b[50100],ans[50100];
int main(){
    int i,j,n,m,cou,k;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i][0],&a[i][1]);
        ans[i] = a[i][0];
    }
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        cou = 0;
        for(j=0;j<m;j++){
            if(ans[i]<=b[j]){
                cou++;
                ans[i] = a[i][cou%2];
            }
        }
//        for(k=0;k<n;k++){
//            printf("%d ",ans[k]);
//        }
//        printf("\n");
    }
    for(i=0;i<n;i++){
        printf("%d\n",ans[i]);
    }
    return 0;
}
/*
5 3
1 4
3 5
5 2
3 3
1 2
1
2
3
*/
