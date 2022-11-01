#include <stdio.h>
#include <ctype.h>
char a[20][20];
int checktn(int i,int j){
    char target;
    int k;
    if(islower(a[i][j])) target = 'K';
    else target = 'k';
    for(k=i-1;k>=2;k--){
        if(a[k][j] == target) return 1;
        else if(a[k][j] != '.') break;
    }
    for(k=i+1;k<=9;k++){
        if(a[k][j] == target) return 1;
        else if(a[k][j] != '.') break;
    }
    for(k=j-1;k>=2;k--){
        if(a[i][k] == target) return 1;
        else if(a[i][k] != '.') break;
    }
    for(k=j+1;k<=9;k++){
        if(a[i][k] == target) return 1;
        else if(a[i][k] != '.') break;
    }
    return 0;
}
int checkty(int i,int j){
    char target;
    int k,l;
    if(islower(a[i][j])) target = 'K';
    else target = 'k';
    for(k=i-1,l=j-1;k>=2&&l>=2;k--,l--){
        if(a[k][l] == target) return 1;
        else if(a[k][l] != '.') break;
    }
    for(k=i-1,l=j+1;k>=2&&l<=9;k--,l++){
        if(a[k][l] == target) return 1;
        else if(a[k][l] != '.') break;
    }
    for(k=i+1,l=j-1;k<=9&&l>=2;k++,l--){
        if(a[k][l] == target) return 1;
        else if(a[k][l] != '.') break;
    }
    for(k=i+1,l=j+1;k<=9&&l<=9;k++,l++){
        if(a[k][l] == target) return 1;
        else if(a[k][l] != '.') break;
    }
    return 0;
}
int main(){
    int q,i,j,k;
    char now;
    scanf("%d",&q);
    while(q--){
        for(i=2;i<=9;i++){
            for(j=2;j<=9;j++){
                scanf(" %c",&a[i][j]);
            }
        }
        for(i=2;i<=9;i++){
            for(j=2;j<=9;j++){
                now = a[i][j];
                if(now == 'P'){
                    if(a[i-1][j-1] == 'k' || a[i-1][j+1] == 'k'){
                        printf("P check black king.\n");
                        goto next;
                    }
                }
                else if(now == 'p'){
                    if(a[i+1][j-1] == 'K' || a[i+1][j+1] == 'K'){
                        printf("p check white king.\n");
                        goto next;
                    }
                }
                else if(now == 'R'){
                    if(checktn(i,j)){
                        printf("R check black king.\n");
                        goto next;
                    }
                }
                else if(now == 'r'){
                    if(checktn(i,j)){
                        printf("r check white king.\n");
                        goto next;
                    }
                }
                else if(now == 'B'){
                    if(checkty(i,j)){
                        printf("B check black king.\n");
                        goto next;
                    }
                }
                else if(now == 'b'){
                    if(checkty(i,j)){
                        printf("b check white king.\n");
                        goto next;
                    }
                }
                else if(now == 'Q'){
                    if(checktn(i,j) || checkty(i,j)){
                        printf("Q check black king.\n");
                        goto next;
                    }
                }
                else if(now == 'q'){
                    if(checktn(i,j) || checkty(i,j)){
                        printf("q check white king.\n");
                        goto next;
                    }
                }
                else if(now == 'N'){
                    if(a[i-2][j-1] == 'k' || a[i-2][j+1] == 'k' || a[i-1][j-2] == 'k' || a[i-1][j+2] == 'k' || a[i+1][j-2] == 'k' || a[i+1][j+2] == 'k' || a[i+2][j-1] == 'k' || a[i+2][j+1] == 'k'){
                        printf("N check black king.\n");
                        goto next;
                    }
                }
                else if(now == 'n'){
                    if(a[i-2][j-1] == 'K' || a[i-2][j+1] == 'K' || a[i-1][j-2] == 'K' || a[i-1][j+2] == 'K' || a[i+1][j-2] == 'K' || a[i+1][j+2] == 'K' || a[i+2][j-1] == 'K' || a[i+2][j+1] == 'K'){
                        printf("n check white king.\n");
                        goto next;
                    }
                }
            }
        }
        printf("No king is in check.\n");
        next:;
    }
    return 0;
}
/*
3
..k.....
ppp.pppp
........
.R...B..
........
........
PPPPPPPP
K.......
rnbqkbnr
pppppppp
........
........
........
........
PPPPPPPP
RNBQKBNR
rnbqk.nr
ppp..ppp
....p...
...p....
.bPP....
.....N..
PP..PPPP
RNBQKB.R
*/