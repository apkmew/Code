#include <bits/stdc++.h>
using namespace std;
char a[10][10],ch;
int m,n,p;
void play(int i,int j){
    a[i][j]='-';
    if(i+1<m && a[i+1][j]==ch) p+=5,play(i+1,j);
    if(i-1>=0 && a[i-1][j]==ch) p+=5,play(i-1,j);
    if(j+1<n && a[i][j+1]==ch) p+=5,play(i,j+1);
    if(j-1>=0 && a[i][j-1]==ch) p+=5,play(i,j-1);
    return ;
}
int main(){
    int i,j,k,l,x,y,z;
    char b;
    p = 0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    scanf("%d",&l);
    z = l;
    while(l--){
        scanf("%d %d %c",&x,&y,&b);
        if(b=='R' && a[x][y+1]=='-'){
            swap(a[x][y],a[x][y+1]);
            y++;
            while(a[x+1][y]=='-'){
                swap(a[x][y],a[x+1][y]);
                x++;
            }
            ch = a[x][y];
            if(a[x+1][y]==ch || a[x][y+1]==ch || a[x][y-1]==ch){
                p+=5;
                play(x,y);
            }
        }
        else if(b=='R' && a[x][y+1]!='-'){
            p-=5;
        }
        else if(b=='L' && a[x][y-1]=='-'){
            swap(a[x][y],a[x][y-1]);
            y--;
            while(a[x+1][y]=='-'){
                swap(a[x][y],a[x+1][y]);
                x++;
            }
            ch = a[x][y];
            if(a[x+1][y]==ch || a[x][y+1]==ch || a[x][y-1]==ch){
                p+=5;
                play(x,y);
            }
        }
        else if(b=='L' && a[x][y-1]!='-'){
            p-=5;
        }
        /*for(i=m-1;i>=0;i--){
            for(j=0;j<n;j++){
                if(isalpha(a[i][j]) && a[i+1][j]=='-'){
                    k = i;
                    while(a[k+1][j]=='-'){
                        swap(a[k][j],a[k+1][j]);
                        k++;
                    }
                }
                ch = a[k][j];
                if(a[k+1][j]==ch || a[k][j+1]==ch || a[k][j-1]==ch){
                    p+=5;
                    printf("ch");
                    play(k,j);
                }
            }
        }*/
    }
    printf("%d\n",p);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
