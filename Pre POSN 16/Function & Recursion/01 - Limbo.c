/*
 TASK: Limbo
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
char a[1100][100];
int ans=0,max=0,i,j,w,h;;
void play(int i,int j){
    ans++;
    a[i][j]='.';
    if(a[i][j+1]=='*' && j+1<w)  play(i,j+1);
    if(a[i-1][j]=='*' && i-1>=0)  play(i-1,j);
    if(a[i][j-1]=='*' && j-1>=0)  play(i,j-1);
    if(a[i+1][j]=='*' && i+1<h)  play(i+1,j);
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
                if(ans>max)
                    max=ans;
            }
        }

    }
    printf("%d\n",max);
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
