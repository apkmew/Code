#include <stdio.h>
int a[20][10], ans[1001000][10];
int main(){
    int n,i,j,k,l,m,cou=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                for(l=0;l<n;l++){
                    for(m=0;m<n;m++){
                        if(a[i][0]==a[j][1] && a[j][1]==a[k][2] && a[k][2]==a[l][3] && a[l][3]==a[m][4]){
                            ans[cou][0]=i+1;
                            ans[cou][1]=j+1;
                            ans[cou][2]=k+1;
                            ans[cou][3]=l+1;
                            ans[cou][4]=m+1;
                            cou++;
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",cou);
    for(i=0;i<cou;i++){
        for(j=0;j<5;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}
/*
4
1 3 1 3 1
3 1 3 1 2
2 2 2 2 1
3 4 4 4 3
*/