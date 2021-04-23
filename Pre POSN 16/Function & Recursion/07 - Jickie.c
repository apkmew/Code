/*
 TASK: Jickie
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int A,B,C,mark[22][22][22],ans[22];
void play(int a,int b,int c){
    if(a<0 || a>A || b<0 || b>B || c<0 || c>C)  return ;
    if(mark[a][b][c])   return ;
    mark[a][b][c] = 1;
    if(a==0)
        ans[c]=1;
    //A->B
    play(0,a+b,c);  play(a-B+b,B,c);
    //A->C
    play(0,b,a+c);  play(a-C+c,b,C);
    //B->C
    play(a,0,b+c);  play(a,b-C+c,C);
    //B->A
    play(a+b,0,c);  play(A,b-A+a,c);
    //C->A
    play(a+c,b,0);  play(A,b,c-A+a);
    //C->B
    play(a,b+c,0);  play(a,B,c-B+b);
}
int main(){
    scanf("%d %d %d",&A,&B,&C);
    play(0,0,C);
    for(int i=0;i<=C;i++)
        if(ans[i])
            printf("%d ",i);
	return 0;
}

