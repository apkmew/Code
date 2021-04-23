/*
    TASK : Food
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int mark[10],a[10],ans[10],n,m;
void play(int st){
    int i;
    if(st==n){
        for(i=0;i<st;i++) cout << ans[i];
        cout << "\n";
        return ;
    }
    for(i=1;i<=n;i++){
        if(st>0 && a[i]==0 || st==0 && mark[i]==0){
            a[i] = 1;
            ans[st] = i;
            play(st+1);
            a[i] = 0;
        }
    }
    return ;
}
int main(){
    int i,num;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> num;
        mark[num] = 1;
    }
    play(0);
    return 0;
}