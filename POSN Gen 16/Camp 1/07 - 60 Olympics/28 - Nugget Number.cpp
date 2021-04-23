/*
    TASK: Nugget Number
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int mark[110];
void play(int i){
    if(i+6<=100) mark[i+6]=1,play(i+6);
    if(i+9<=100) mark[i+9]=1,play(i+9);
    if(i+20<=100) mark[i+20]=1,play(i+20);
    return ;
}
int main()
{
    int n,i,ch=0;
    scanf("%d",&n);
    play(0);
    for(i=6;i<=n;i++){
        if(mark[i]) ch=1,printf("%d\n",i);
    }
    if(!ch) printf("no\n");
    return 0;
}
