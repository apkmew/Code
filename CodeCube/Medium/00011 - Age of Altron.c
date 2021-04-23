#include<bits/stdc++.h>
using namespace std

int a[1010][1010];

void play(int i,int j){

}

int main(){
    int i,j,n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    for(i=n-2;i>=0;i--){
        for(j=0;j<m;j++){
            if(a[i][j] == 1)
                continue;
            else if(a[i][j] == 0 && ){

            }
        }
    }
    return 0;
}
