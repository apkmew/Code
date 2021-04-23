#include <bits/stdc++.h>
using namespace std;
int x[110][5],y[110][5];
int main(){
    int n1,n2,i,ii=0,jj=0;
    scanf("%d",&n1); for(i=1;i<=n1;i++){
        scanf("%d",&x[i][0]);
        x[i][1] = i%2;
    } 
    scanf("%d",&n2); for(i=1;i<=n2;i++){
        scanf("%d",&y[i][0]);
        y[i][1] = i%2;
    } 
    while (ii<=n1 && jj<=n2)
    {
        if(x[ii][0]<=y[jj][0] && ii<=n1){
            ii++;
            
        } 
    }
    
    return 0;
}