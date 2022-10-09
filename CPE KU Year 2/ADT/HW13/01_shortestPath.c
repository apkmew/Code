#include <stdio.h>

typedef struct edge {
    int u, v, w;
} edge_t;

int n,m;
edge_t edges[200100];
int dis[100100];

void bellman_ford(int u,int v){
    int i,j;
    for(i=0;i<n;i++) dis[i]=1e9;
    dis[u]=0;
    for(i=0;i<n-1;i++){
        for(j=0;j<m;j++){
            if(dis[edges[j].u]+edges[j].w<dis[edges[j].v]){
                dis[edges[j].v]=dis[edges[j].u]+edges[j].w;
            }
        }
    }
    if(dis[v]==1e9) dis[v] = -1;
    printf("%d\n",dis[v]);
}

int main(){
    int p,u,v;
    scanf("%d %d %d",&n,&m,&p);
    m *= 2;
    for(int i=0;i<m;i+=2){
        scanf("%d %d %d",&edges[i].u,&edges[i].v,&edges[i].w);
        edges[i+1].u = edges[i].v;
        edges[i+1].v = edges[i].u;
        edges[i+1].w = edges[i].w;
    }
    for(int i=0;i<p;i++){
        scanf("%d %d",&u,&v);
        bellman_ford(u,v);
    }
    return 0;
}