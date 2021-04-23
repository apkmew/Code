/*
    TASK : Paper Rock Scissors
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace std;
char a[1000100],b[1000100];
int ans,n;
void play(int i){
    //printf("ch %d\n",i);
    int ch = 0;
    if(i==n){
        for(int j=2;j<n;j++){
            if(a[j] == a[j-1] && a[j-1] == a[j-2]) ch = 1;
        }
        if(!ch) ans++;
        if(!strcmp(a,b)){
            printf("%d",ans);
            exit(0);
        }
        return ;
    }
    a[i] = 'P'; play(i+1);
    a[i] = 'R'; play(i+1);
    a[i] = 'S'; play(i+1);
    return ;
}
int main(){
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf(" %c",&b[i]);
    play(0);
    return 0;
}