#include <bits/stdc++.h>
using namespace std;
int a[20][20],ans=1<<30,c[20],d[20],n;
void play(int state,int last,int j){
    int i,s,b;
    if(state == j){
        s = 1;
        b = 0;
        for(i=0;i<j;i++){
            s *= a[d[i]-1][0];
            b += a[d[i]-1][1];
        }
        ans = min(ans,abs(s-b));
        return ;
    }
    for(i=last+1;i<=n;i++){
        if(!c[i]){
            c[i] = 1;
            d[state] = i;
            play(state+1,i,j);
            c[i] = 0;
        }
    }
}
int main(){
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i][0],&a[i][1]);
    }
    for(i=1;i<=n+1;i++){
        play(0,0,i);
    }
    printf("%d",ans);
    return 0;
}
