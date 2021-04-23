#include <bits/stdc++.h>
using namespace std;
char a[100][100];
int main(){
    int w,h,i,j,k;
    scanf("%d %d",&w,&h);
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            if(a[i][j]=='^'){
                k = i-1;
                while(k>=0){
                    if(a[k][j]=='.') a[k][j]='|',k--;
                    else if(a[k][j]=='-') a[k][j]='+',k--;
                    else if(a[k][j]=='B'){
                        a[k][j]='*'; break;
                    }
                    else if(a[k][j]=='*') k--;
                    else break;
                }
            }
            else if(a[i][j]=='V'){
                k = i+1;
                while(k<h){
                    if(a[k][j]=='.') a[k][j]='|',k++;
                    else if(a[k][j]=='-') a[k][j]='+',k++;
                    else if(a[k][j]=='B'){
                        a[k][j]='*'; break;
                    }
                    else if(a[k][j]=='*') k++;
                    else break;
                }
            }
            else if(a[i][j]=='>'){
                k = j+1;
                while(k<w){
                    if(a[i][k]=='.') a[i][k]='-',k++;
                    else if(a[i][k]=='|') a[i][k]='+',k++;
                    else if(a[i][k]=='B'){
                        a[i][k]='*'; break;
                    }
                    else if(a[i][k]=='*') k++;
                    else break;
                }
            }
            else if(a[i][j]=='<'){
                k = j-1;
                while(k>=0){
                    if(a[i][k]=='.') a[i][k]='-',k--;
                    else if(a[i][k]=='|') a[i][k]='+',k--;
                    else if(a[i][k]=='B'){
                        a[i][k]='*'; break;
                    }
                    else if(a[i][k]=='*') k--;
                    else break;
                }
            }
        }
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
