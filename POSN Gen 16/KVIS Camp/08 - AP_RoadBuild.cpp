/*
    TASK: AP_Road Build B-Search
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[250100][5],b[250100][5],p[300100];
int fr(int i){
    if(p[i] == i)
        return i;
    return p[i] = fr(p[i]);
}
int main()
{
    int l,r,mid,i,t,v,e,m,x,y,ch,cnt=0;
    scanf("%d",&t);
    while(t--){
        cnt++;
        scanf("%d %d %d",&v,&e,&m);
        for(i=1;i<=e;i++) scanf("%d %d",&a[i][0],&a[i][1]);
        for(i=1;i<=m;i++) scanf("%d %d",&b[i][0],&b[i][1]);
        l = 1, r = m;
        while(l<r){
            for(i=1;i<=300000;i++) p[i] = i;
            ch = 0;
            mid = (l+r)/2;
            for(i=1;i<=mid;i++){
                x = fr(p[b[i][0]]);
                y = fr(p[b[i][1]]);
                p[y] = x;
            }
            for(i=1;i<=e;i++){
                x = fr(p[a[i][0]]);
                y = fr(p[a[i][1]]);
                if(p[x]!=p[y]){
                    ch = 1;
                    break;
                }
            }
            if(ch==0) r = mid;//printf("RIGHT\n");
            else      l = mid+1;//printf("LEFT\n");
        }
        printf("C#%d: %d\n",cnt,l);
    }
    return 0;
}
/*
2
5 5 5
1 2
1 3
3 2
4 5
2 5
1 5
2 3
1 4
1 3
2 5
5 3 2
1 2
1 3
1 4
1 2
1 3
-----
1
5 1 2
1 2
1 3
1 4
*/
