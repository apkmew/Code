/*
    TASK : Permutation
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int mark[20],ans[20],cou,n,r,k;
void play(int st){
    if(st==r){
        cou++;
        if(cou==k){
            for(int i=0;i<st;i++) printf("%d ",ans[i]);
            exit(0);
        }
    }
    for(int i=1;i<=n;i++){
        if(!mark[i]){
            mark[i] = 1;
            ans[st] = i;
            play(st+1);
            mark[i] = 0;
        }
    }
}
int main(){
    scanf("%d %d %d",&n,&r,&k);
    play(0);
    return 0;
}