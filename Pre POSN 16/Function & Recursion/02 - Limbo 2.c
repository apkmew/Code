/*
 TASK: Limbo 2
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
char a[1100][100];
int ans=0,min=100000,i,j,w,h;;
void play(int i,int j){
    ans++;
    a[i][j]='.';
    if(a[i][j+1]=='*' && j+1<w)  play(i,j+1);
    if(a[i-1][j]=='*' && i-1>=0)  play(i-1,j);
    if(a[i][j-1]=='*' && j-1>=0)  play(i,j-1);
    if(a[i+1][j]=='*' && i+1<h)  play(i+1,j);
    if(a[i+1][j+1]=='*' && j+1<=w && i+1<=h)  play(i+1,j+1);
    if(a[i-1][j+1]=='*' && i-1>=0 && j+1<=w)  play(i-1,j+1);
    if(a[i-1][j-1]=='*' && j-1>=0 && i-1>=0)  play(i-1,j-1);
    if(a[i+1][j-1]=='*' && i+1<=h && j-1>=0)  play(i+1,j-1);
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
                ans=0;
                play(i,j);
                if(ans<min)
                    min=ans;
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
