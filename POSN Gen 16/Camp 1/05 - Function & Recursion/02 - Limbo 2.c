/*
    TASK: Limbo 2
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int w,h,now,min=100000;
char a[1100][100];
void play(int i,int j){
    now++;
    a[i][j]='.';
    if(i+1<h && a[i+1][j]=='*') play(i+1,j);
    if(i-1>=0 && a[i-1][j]=='*') play(i-1,j);
    if(j+1<w && a[i][j+1]=='*') play(i,j+1);
    if(j-1>=0 && a[i][j-1]=='*') play(i,j-1);
    if(i+1<h && j+1<w && a[i+1][j+1]=='*') play(i+1,j+1);
    if(i+1<h && j-1>=0 && a[i+1][j-1]=='*') play(i+1,j-1);
    if(i-1>=0 && j+1<w && a[i-1][j+1]=='*') play(i-1,j+1);
    if(i-1>=0 && j-1>=0 && a[i-1][j-1]=='*') play(i-1,j-1);
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
                now = 0;
                play(i,j);
                if(now<min) min = now;
            }
        }
    }
    printf("%d\n",min);
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
