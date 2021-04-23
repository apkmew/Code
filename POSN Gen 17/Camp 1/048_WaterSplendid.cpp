/*
    TASK : Water Splendid
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
int a[10],mark[110],b,c,ans[100100][110],cou;
void play(int sum,int st){
    //printf("%d %d\n",st,sum);
    if(st>c || sum>b) return ;
    if(sum == b){
        //printf("%d %d ",sum,st);
        ans[cou][0] = st;
        for(int i=0;i<st;i++){
            ans[cou][i+1] = mark[i];
            //printf("%d ",cou);
            //printf("%d ",ans[cou][i+1]);
        }
        //printf("\n");
        cou++;
        return ;
    }
    mark[st] = a[0]; play(sum+a[0],st+1);
    mark[st] = a[1]; play(sum+a[1],st+1); 
    mark[st] = a[2]; play(sum+a[2],st+1); 
    mark[st] = a[3]; play(sum+a[3],st+1); 
    mark[st] = a[4]; play(sum+a[4],st+1); 
    mark[st] = a[5]; play(sum+a[5],st+1); 
    return ;
}
using namespace std;
int main(){
    int i,j;
    scanf("%d %d",&b,&c);
    scanf("%d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
    play(0,0);
    printf("%d\nE\n",cou);
    for(i=0;i<cou;i++){
        printf("%d ",ans[i][0]);
        for(j=1;j<=ans[i][0];j++) printf("%d ",ans[i][j]);
        printf("\nE\n");
    }
    return 0;
}
/*
6 2 
1 2 3 4 5 6
*/