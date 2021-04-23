/*
    TASK : Jikkie
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int A,B,C,mark[30][30][30],ans[30],cou;
void play(int a,int b,int c){
    if(a<0 || a>A || b<0 || b>B || c<0 || c>C) return ;
    if(mark[a][b][c])   return ;
    mark[a][b][c] = 1;
    if(a==0) ans[cou++] = c;
    play(0,b+a,c);
    play(a-B+b,B,c);
    play(0,b,c+a);
    play(a-C+c,b,C);
    play(a+b,0,c);
    play(A,b-A+a,c);
    play(a,0,c+b);
    play(a,b-C+c,C);
    play(a+c,b,0);
    play(A,b,c-A+a);
    play(a,b+c,0);
    play(a,B,c-B+b);
}
int main(){
    scanf("%d %d %d",&A,&B,&C);
    play(0,0,C);
    sort(ans,ans+cou);
    for(int i=0;i<cou;i++) printf("%d ",ans[i]);
    return 0;
}