#include <stdio.h>
#include <stdlib.h>
int ag[100][100],vg[100],ab[100][100],vb[100],tgc[100],tbc[100],ans[100];
int n,m,answer,tg,tb,tempt;

void dfs(int node, int *t){
    vg[node] = 1;
    for(int i=0;i<n;i++){
        if(ag[node][i] && !vg[i]){
            dfs(i,t);
        }
    }
    tgc[node] = *t;
    (*t)++;
}

void dfs2(int node, int *t, int *l){
    vb[node] = 1;
    for(int i=0;i<n;i++){
        if(ab[node][i] && !vb[i]){
            dfs2(i,t,l);
        }
    }
    tbc[node] = *t;
    l[*t - tempt] = node;
    (*t)++;
}

void sortans(){
    int temp;
    for(int i=0;i<answer;i++){
        for(int j=i+1;j<answer;j++){
            if(ans[i]>ans[j]){
                temp = ans[i];
                ans[i] = ans[j];
                ans[j] = temp;
            }
        }
    }
}

int main(){
    int *l = malloc(sizeof(int)*100);
    int i;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++){
        int u,v;
        scanf("%d %d",&u,&v);
        ag[u][v] = 1;
        ab[v][u] = 1;
    }
    for(i=0;i<n;i++){
        if(!vg[i]){
            dfs(i,&tg);
        }
    }
    int j;
    for(i=0;i<n;i++){
        int mxt = 0, idx = -1;
        for(j=0;j<n;j++){
            if(!vb[j] && tgc[j] > mxt){
                mxt = tgc[j];
                idx = j;
            }
        }
        if(idx == -1) break;
        tempt = tb;
        dfs2(idx,&tb,l);
        int sz = tb - tempt;
        if(answer < sz){
            answer = sz;
            for(j=0;j<sz;j++){
                ans[j] = l[j];
            }
        }
    }
    sortans();
    for(i=0;i<answer;i++){
        printf("%d ",ans[i]);
    }
}
/*
5 5
1 2
2 0
0 1
0 3
3 4
=====
8 9
0 1
1 2
2 3
2 4
3 0
4 5
5 6
6 4
6 7
=====
12 17
0 1
1 2
1 3
1 4
2 5
4 1
4 5
4 6
5 7
5 2
6 7
6 9
7 10
8 6
9 8
10 11
11 9
=====
4 5
0 1
1 2
2 0
2 3
0 3
=====
10 14
0 1
0 4
2 0
2 9
3 2
5 3
5 7
6 1
6 7
7 8
7 0
8 4
8 6
9 5
*/