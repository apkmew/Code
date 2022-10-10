#include <stdio.h>
int store[100100],n,m,edge[200100][3];
int ingraph(int x,int y){
    for(int i=0;i<2*m;i++){
        if(edge[i][0]==x&&edge[i][1]==y) return 1;
    }
    return 0;
}
int isclique(int b){
    for(int i=1;i<b;i++){
        for(int j=i+1;j<b;j++){
            if(!ingraph(store[i],store[j])) return 0;
        }
    }
    return 1;
}
int maxclique(int i, int l){
    int mx = 0;
    for(int j=i+1;j<=n;j++){
        store[l] = j;
        if(isclique(l+1)){
            if(l>mx) mx = l;
            int mxclique = maxclique(j,l+1);
            if(mxclique>mx) mx = mxclique;
        }
    }
    return mx;
}
int main(){
    int i,u,v;
    scanf("%d %d",&n,&m);
    for(i=0;i<2*m;i+=2){
        scanf("%d %d",&u,&v);
        u++; v++;
        edge[i][0]=u;
        edge[i][1]=v;
        edge[i+1][0]=v;
        edge[i+1][1]=u;
    }
    printf("%d",maxclique(0,1));
    return 0;
}
/*
5 5
1 2
2 0
0 1
0 3
3 4
=====
5 8
0 1
0 3
0 2
1 3
1 2
2 3
3 4
2 4
=====
7 12
0 1
0 2
0 3
1 3
2 4
2 5
2 6
3 4
3 5
4 5
4 6
5 6
=====
10 18
8 0
9 8
3 9
0 3
3 4
2 4
1 0
1 2
5 6
6 7
2 5
5 7
4 7
1 3
4 0
2 3
1 4
0 2
=====
6 9
0 1
0 2
1 2
1 3
1 4
3 4
2 4
2 5
4 5
*/