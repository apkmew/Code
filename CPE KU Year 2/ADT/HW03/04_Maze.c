#include <stdio.h>
#include <stdlib.h>
char a[110][110];
int di[] = {1,-1,0,0},dj[] = {0,0,1,-1},n,sti,stj;
void traverseMaze(int i,int j){
    int k;
    if(i<0 || i>=n || j<0 || j>=n || a[i][j]=='#' || a[i][j]=='.') return;
    if(a[i][j]=='G'){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%c",a[i][j]);
            }
            printf("\n");
        }
        exit(0);
    }
    if(a[i][j]!='S') a[i][j] = '.';
    for(k=0;k<4;k++){
        if(a[i+di[k]][j+dj[k]]!='S') traverseMaze(i+di[k],j+dj[k]);
    }
    if(a[i][j]!='S') a[i][j] = ' ';
    return;
}
int main(){
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf(" %[^\n]s",a[i]);
        for(j=0;j<n;j++){
            if(a[i][j] == 'S'){
                sti = i; stj = j;
            }
        }
    }
    traverseMaze(sti,stj);
    return 0;
}
/*
12
############
#   #      #
S # # #### #
### #    # #
#    ### # G
#### # # # #
#  # # # # #
## # # # # #
#        # #
###### ### #
#      #   #
############
############
#...#......#
S.#.#.####.#
###.#....#.#
#  ..###.#.G
####.# #.# #
#  #.# #.# #
## #.# #.# #
#   .....# #
###### ### #
#      #   #
############
*/