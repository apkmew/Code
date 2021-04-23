/*
 TASK: Limbo 2
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
char a[1100][100];
int ans=0,i,j,w,h;;
void play(int i,int j){
    a[i][j]='.';
    if(a[i][j+1]=='*' && j+1<w)  play(i,j+1);
    if(a[i-1][j]=='*' && i-1>=0)  play(i-1,j);
    if(a[i][j-1]=='*' && j-1>=0)  play(i,j-1);
    if(a[i+1][j]=='*' && i+1<h)  play(i+1,j);

    if(a[i][0]=='*' && j+1==w)  play(i,0);
    if(a[h-1][j]=='*' && i-1<0)  play(h-1,j);
    if(a[i][w-1]=='*' && j-1<0)  play(i,w-1);
    if(a[0][j]=='*' && i+1==h)  play(0,j);
}

int main(){
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
                ans++;
            }
        }

    }
    printf("%d\n",ans);
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
