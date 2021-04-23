#include<stdio.h>
char a[1100];
char b[1100];
int n,m,ans,i,j = 0;
void play(int x,int y){
    if(a[x] == b[y] && y != m-1)
        play(x+1,y+1);
    else if(a[x] == b[y] && y == m-1)
        ans++;
}
int main(){
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf(" %c",&a[i]);
    }
    for(i=0;i<m;i++){
        scanf(" %c",&b[i]);
    }
    for(i=0;i<n;i++){
        if(a[i] == b[0])
            play(i+1,1);
    }
    printf("%d",ans);
    return 0;
}
