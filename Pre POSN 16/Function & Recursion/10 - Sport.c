/*
 TASK: Sport
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int k,a[200];
void play(int w,int l,int state){
    if(w==k || l==k){
        for(int i=0;i<state;i++){
            if(a[i]==1) printf("W ");
            if(a[i]==2) printf("L ");
        }
        printf("\n");
        return ;
    }
    a[state] = 1;
    play(w+1,l,state+1);
    a[state] = 2;
    play(w,l+1,state+1);
}
int main(){
    int w,l;
    scanf("%d %d %d",&k,&w,&l);
    play(w,l,0);

	return 0;
}
