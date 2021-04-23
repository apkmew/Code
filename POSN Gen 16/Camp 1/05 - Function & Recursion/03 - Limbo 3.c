/*
    TASK: Limbo 3
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
char a[1100][100];
int w,h,now=0;
void play(int i,int j){
    a[i][j]='.';
    if(i+1<h && a[i+1][j]=='*') play(i+1,j);
    if(i-1>=0 && a[i-1][j]=='*') play(i-1,j);
    if(j+1<w && a[i][j+1]=='*') play(i,j+1);
    if(j-1>=0 && a[i][j-1]=='*') play(i,j-1);
    if(i+1==h && a[0][j]=='*') play(0,j);
    if(i-1<0 && a[h-1][j]=='*') play(h-1,j);
    if(j+1==w && a[i][0]=='*') play(i,0);
    if(j-1<0 && a[i][w-1]=='*') play(i,w-1);
}
int main()
{
    int i,j;
    scanf("%d %d",&w,&h);
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            if(a[i][j]=='*'){
                play(i,j);
                now++;
            }
        }
    }
    printf("%d\n",now);
    return 0;
}
/*
10 5
..*.....**
.**..*****
.*...*....
..****.***
..****.***
*/
