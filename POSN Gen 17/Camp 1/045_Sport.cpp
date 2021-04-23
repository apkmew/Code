/*
    TASK : Sport
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int k;
char ans[300];
void play(int w,int l,int st){
    if(w==k || l==k){
        for(int i=0;i<st;i++){
            printf("%c ",ans[i]);
        }
        printf("\n");
        return ;
    }
    ans[st] = 'W'; play(w+1,l,st+1);
    ans[st] = 'L'; play(w,l+1,st+1);
    return ;
}
int main(){
    int w,l;
    scanf("%d",&k);
    scanf("%d",&w);
    scanf("%d",&l);
    play(w,l,0);
    return 0;
}