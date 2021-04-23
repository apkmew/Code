/*
    TASK: FC_Dominoes
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int x,h;
    bool operator<(const A& o)const{
        return x<o.x;
    }
};
A a[100100];
int l[100100],r[100100];
int main()
{
    int n,i,mxr=-1,mxl=-1,ar,al,k;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d %d",&a[i].x,&a[i].h);
    sort(a,a+n);
    for(i=1;i<n;i++){
        if(a[i].h>a[i].x-a[i-1].x) r[i] = r[i-1] + 1;
        else r[i] = 0;
        k = i;
        while(k-r[k]>=0 && r[k] != 0 && a[k].h>a[k].x-a[k-r[k]-1].x) r[i] += r[k-r[k]], k -= r[k];
        if(r[i]>mxr){
            mxr = r[i];
            ar = i+1;
        }
    }
    for(i=n-2;i>=0;i--){
        if(a[i].h>a[i+1].x-a[i].x) l[i] = l[i+1] + 1;
        else l[i] = 0;
        k = i;
        while(k+l[k]<=n && l[k] != 0 && a[k].h>a[k+l[k]+1].x-a[k].x) l[i] += l[k-l[k]], k += l[k];
        if(l[i]>=mxl){
            mxl = l[i];
            al = i+1;
        }
    }
    if(mxl>=mxr) printf("%d R",al);
    else printf("%d L",ar);
    return 0;
}
/*
5
1 1
3 3
5 4
7 15
10 3
*/
