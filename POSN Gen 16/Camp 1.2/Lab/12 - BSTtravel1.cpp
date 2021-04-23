/*
    TASK: BST Travel 1
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int tree[1<<23];
char a[10];
void pre(int i){
    if(tree[i]==0) return ;
    printf("%d\n",tree[i]);
    pre(2*i);
    pre(2*i+1);
}
void pos(int i){
    if(tree[i]==0) return ;
    pos(2*i);
    pos(2*i+1);
    printf("%d\n",tree[i]);
}
void in(int i){
    if(tree[i]==0) return ;
    in(2*i);
    printf("%d\n",tree[i]);
    in(2*i+1);
}
void bfs(int i){
    for(i=1;i<1<<23;i++){
        if(tree[i])
            printf("%d\n",tree[i]);
    }
}
int main()
{
    int n,num,run,i;
    scanf(" %s %d",a,&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        run = 1;
        while(tree[run]!=0){
            if(num < tree[run]) run = 2*run;
            else run = 2*run + 1;
        }
        tree[run] = num;
    }
    if(a[1]=='R') pre(1);
    if(a[1]=='O') pos(1);
    if(a[1]=='N') in(1);
    if(a[1]=='F') bfs(1);
    return 0;
}
/*
5
17
6
3
14
19
*/
