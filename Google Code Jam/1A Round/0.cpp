#include <bits/stdc++.h>
using namespace std;
int a[1010][1010],mark[1010][1010],num,di[]={-1,-1,0,0,1,1},dj[]={-1,0,-1,1,0,1},ch,cnt=0;
pair<int,int> b[100001000];
void play(int i,int j,int sum,int state){
    int k,ii,jj;
    //printf("%d %d\n",state,sum);
    sum += a[i][j];
    mark[i][j] = 1;
    b[state].first = i, b[state].second = j;
    if(sum > num){
        mark[i][j] = 0;
        return ;
    }
    if(sum == num && ch==0){
        //printf("%d\n",state);
        printf("Case #%d:\n",cnt);
        for(k=0;k<=state;k++){
            printf("%d %d\n",b[k].first,b[k].second);
            b[k].first = b[k].second = mark[b[k].first][b[k].second] = 0;
        }
        ch = 1;
        return ;
    }
    for(k=0;k<6;k++){
        if(ch==1) break;
        ii = i + di[k], jj = j + dj[k];
        if(a[ii][jj]==0) continue;
        if(mark[ii][jj]==1) continue;
        play(ii,jj,sum,state+1);
    }
}
int main(){
    int t,i,j;
    a[1][1] = 1;
    for(i=2;i<=1000;i++){
        for(j=1;j<=i;j++){
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    scanf("%d",&t);
    while(t--){
        cnt++;
        scanf("%d",&num);
        play(1,1,0,0);
        ch = 0;
    }
    return 0;
}
