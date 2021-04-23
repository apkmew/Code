#include <bits/stdc++.h>
using namespace std;
char x[100100],y[100100];
int e,ch,ch2,q;
void play(int i,int a,int b,int c,int d,int state){
    int j,l,m,n,o,p;
    if(a==0 && b==0 && c==0 && d==0) ch=1;
    //printf("%d %d %d %d %d %d\n",i,a,b,c,d,ch);
    if(state==q) exit(0);
    if(ch==1){
        ch=0;
        for(j=0;j<e;j++) printf("%c",y[j]);
        printf("\n");
        state++;
        if(state==q) exit(0);
        scanf("%d %d %d %d %d",&l,&m,&n,&o,&e);
        for(j=0;j<e;j++)
            scanf(" %c",&x[j]);
        play(0,l,m,n,o,state);
    }
    else if(ch!=1){
        if(x[i]!='1' && a>0) y[i]='1',play(i+1,a-1,b,c,d,state);
        if(x[i]!='2' && b>0) y[i]='2',play(i+1,a,b-1,c,d,state);
        if(x[i]!='3' && c>0) y[i]='3',play(i+1,a,b,c-1,d,state);
        if(x[i]!='4' && d>0) y[i]='4',play(i+1,a,b,c,d-1,state);
        return;
    }
}
int main(){
    int i,a,b,c,d;
    scanf("%d",&q);
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    for(i=0;i<e;i++)
        scanf(" %c",&x[i]);
    ch=0;
    play(0,a,b,c,d,0);
    return 0;
}

