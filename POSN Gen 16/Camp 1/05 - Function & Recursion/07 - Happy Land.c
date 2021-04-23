/*
    TASK: Happy Land
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
#include <stdlib.h>
int di[8]={0,0,1,-1,1,1,-1,-1},dj[8]={1,-1,0,0,1,-1,1,-1},m,n,mark[5][5];
double a[5][5],min=1e9;
void play(int i,int j,int state,double sum){
    int k,ii,jj;
    mark[i][j]=1;
    //sum+=a[i][j];
    if(state==m*n){
        //printf("%.2lf ",sum);
        if(sum<min)
            min=sum;
        return ;
    }
    for(k=0;k<8;k++){
        ii = i+di[k], jj = j+dj[k];
        if(ii<0 || ii>=m || jj<0 || jj>=n) continue;
        a[ii][jj] += a[i][j]/10;
    }
    for(ii=0;ii<m;ii++){
        for(jj=0;jj<n;jj++){
            if(!mark[ii][jj]){
                mark[ii][jj]=1;
                play(ii,jj,state+1,sum+a[ii][jj]);
                mark[ii][jj]=0;
            }
        }
    }
    for(k=0;k<8;k++){
        ii = i+di[k], jj = j+dj[k];
        if(ii<0 || ii>=m || jj<0 || jj>=n) continue;
        a[ii][jj] -= a[i][j]/10;
    }
}
int main()
{
    int i,j;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%lf",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            mark[i][j]=1;
            play(i,j,1,a[i][j]);
            mark[i][j]=0;
        }
    }
    printf("\n%.2lf",min);
    return 0;
}
