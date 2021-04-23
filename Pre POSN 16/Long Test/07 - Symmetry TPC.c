/*
 TASK: Symmetry TPC
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int a[40][1010];
int main(){
    int n,t,i,j,max=0,k,ans=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&t);
        for(j=0;j<t;j++){
            scanf("%d",a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<t;j++){
            if(a[i][j]==0){
                for(k=0;k>=0;k++){
                    if(a[i][j]==1){
                        break;
                    }
                    j++;
                }
            }
            if(k%2==1 && k>max){
                max=k;
                ans = j-max/2;
            }
        }
        printf("%d",ans);
        ans=-1;
    }

	return 0;
}
/*
4
12
1 0 0 0 1 0 0 0 0 0 1 1
12
0 0 0 1 0 0 0 1 0 0 0 0
12
1 1 1 0 1 1 1 0 1 1 1 1
12
0 0 1 1 0 0 1 1 0 0 0 0
*/
