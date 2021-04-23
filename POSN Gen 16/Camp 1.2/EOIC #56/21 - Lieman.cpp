/*
    TASK: Lieman
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[30][30],mark[30],lie[30];
int main()
{
    int t,f,n,m,i,j,ans=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<m;j++){
        t = 0;
        f = 0;
        memset(mark,0,sizeof mark);
        for(i=0;i<n;i++){
            if(a[i][j]==1) t++,mark[i]=1;
            if(a[i][j]==-1) f++,mark[i]=-1;
        }
        if(t>f){
            for(i=0;i<n;i++){
                if(mark[i]==-1) lie[i]=1;
            }
        }
        if(t<f){
            for(i=0;i<n;i++){
                if(mark[i]==1) lie[i]=1;
            }
        }
    }
    for(i=0;i<n;i++){
        if(lie[i]) ans++;
    }
    printf("%d",ans);
    return 0;
}
/*
3 3
0 1 0
-1 -1 1
1 1 1
*/
