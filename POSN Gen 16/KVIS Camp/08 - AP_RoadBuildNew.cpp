/*
    TASK: AP_Road Build
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int p[300100],a[250100][5],b[250100][5];
int fr(int i){
    if(p[i]==i)
        return i;
    return p[i] = fr(p[i]);
}
int main()
{
    int i,j,t,v,e,m,x,y,cnt=0,ch,c,d;
    scanf("%d",&t);
    while(t--){
        for(i=1;i<=300000;i++) p[i] = i;
        cnt++;
        scanf("%d %d %d",&v,&e,&m);
        j = 0;
        for(i=1;i<=m;i++) scanf("%d %d",&a[i][0],&a[i][1]);//m
        for(i=1;i<=e;i++) scanf("%d %d",&b[i][0],&b[i][1]);//e
        ch = 0;
        for(i=1;i<=m;i++){
            x = fr(a[i][0]);
            y = fr(a[i][1]);
            while(fr(x) != fr(y)){
                j++;
                if(j>e){
                    ch = 1;
                    goto next;
                }
                c = fr(b[j][0]);
                d = fr(b[j][1]);
                p[d] = c;
            }
        }
        next:;
        if(ch==0) printf("C#%d: %d\n",cnt,j);
        else      printf("C#%d: -1\n",cnt);
    }
    return 0;
}
