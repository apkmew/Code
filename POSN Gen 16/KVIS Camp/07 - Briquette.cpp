/*
    TASK: Briquette
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int p[10100],mark[10100];
int fr(int i){
    if(p[i]==i)
        return i;
    return p[i] = fr(p[i]);
}
int main()
{
    int n,m,a,b,c,i,ans=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++) p[i] = i;
    while(n--){
        scanf("%d",&b);
        if(b==0)    ans++;
        else scanf("%d",&a),mark[a]=1;
        for(i=0;i<b-1;i++){
            scanf("%d",&c);
            mark[c] = 1;
            p[fr(c)] = fr(a);
        }
    }
    for(i=1;i<=m;i++){
        if(p[i]==i && mark[i]==1) ans++;
    }
    printf("%d\n",ans-1);
    return 0;
}
/*
8 7
0
3 1 2 3
1 1
2 5 4
2 6 7
1 3
2 7 4
1 1
*/
