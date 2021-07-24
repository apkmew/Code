/*
    TASK : Sports
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace std;
char a[250],k;
void play(int w,int l,int state){
    if(w==k || l==k){
        for(int i=0;i<state;i++) printf("%c ",a[i]);
        printf("\n");
        return;
    }
    a[state] = 'W'; play(w+1,l,state+1);
    a[state] = 'L'; play(w,l+1,state+1);
    return;
}
int main(){
    int w,l;
    scanf("%d",&k);
    scanf("%d",&w);
    scanf("%d",&l);
    play(w,l,0);
    return 0;
}