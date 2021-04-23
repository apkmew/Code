#include <bits/stdc++.h>
using namespace std;
char a[15][5];
int n;
void play(int i,int state){
    int j,k;
    if(state==n){
        for(j=0;j<i;j++){
            for(k=0;k<2;k++)
                printf("%c",a[j][k]);
            printf("\n");

        }
        printf("E\n");
        return ;
    }
    a[i][0]='-';
    a[i][1]='-';
    play(i+1,state+1);
    if(state+1<n){
        a[i][0]='|';
        a[i][1]='|';
        play(i+1,state+2);
    }
    return ;
}
int main(){
    scanf("%d",&n);
    play(0,0);
    return 0;
}
