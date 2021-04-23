/*
    TASK : House
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int qs1[1010][1010],qs2[1010][1010];
int main(){
    int i,j,r,c,k,sum,mx=-2e9,num;
    scanf("%d %d %d",&r,&c,&k);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf("%d",&num);
            if((i+j)%2==0){ qs1[i][j] = num; qs2[i][j] = -1*num; }
            if((i+j)%2==1){ qs1[i][j] = -1*num; qs2[i][j] = num; }
            qs1[i][j] = qs1[i][j] + qs1[i-1][j] + qs1[i][j-1] - qs1[i-1][j-1];
            qs2[i][j] = qs2[i][j] + qs2[i-1][j] + qs2[i][j-1] - qs2[i-1][j-1];
        }
    }
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            if((i+j)%2==0){
                sum = qs1[r][c];
                if(i!=r && j!=c) sum -= qs1[r][c] - qs1[r][j] - qs1[i][c] + qs1[i][j]; // -quadrant 4
                if(i!=1 && j!=c) sum -= qs1[i-1][c] - qs1[i-1][j]; // -quadrant 1
                if(i!=r && j!=1) sum -= qs1[r][j-1] - qs1[i][j-1]; // -quadrant 3
                if(i!=1 && j!=1) sum -= qs1[i-1][j-1]; // -quadrant 2
                if(j+k<=c) sum -= qs1[i][c] - qs1[i][j+k] - qs1[i-1][c] + qs1[i-1][j+k]; // -right
                if(i+k<=r) sum -= qs1[r][j] - qs1[i+k][j] - qs1[r][j-1] + qs1[i+k][j-1]; // -down
                if(j-k>0) sum -= qs1[i][j-k-1] - qs1[i-1][j-k-1]; // -left
                if(i-k>0) sum -= qs1[i-k-1][j] - qs1[i-k-1][j-1]; // -up
            }
            if((i+j)%2==1){
                sum = qs2[r][c];
                if(i!=r && j!=c) sum -= qs2[r][c] - qs2[r][j] - qs2[i][c] + qs2[i][j]; // -quadrant 4
                if(i!=1 && j!=c) sum -= qs2[i-1][c] - qs2[i-1][j]; // -quadrant 1
                if(i!=r && j!=1) sum -= qs2[r][j-1] - qs2[i][j-1]; // -quadrant 3
                if(i!=1 && j!=1) sum -= qs2[i-1][j-1]; // -quadrant 2
                if(j+k<=c) sum -= qs2[i][c] - qs2[i][j+k] - qs2[i-1][c] + qs2[i-1][j+k]; // -right
                if(i+k<=r) sum -= qs2[r][j] - qs2[i+k][j] - qs2[r][j-1] + qs2[i+k][j-1]; // -down
                if(j-k>0) sum -= qs2[i][j-k-1] - qs2[i-1][j-k-1]; // -left
                if(i-k>0) sum -= qs2[i-k-1][j] - qs2[i-k-1][j-1]; // -up
            }
            mx = max(mx,sum); 
            //printf("%d %d %d\n",i,j,sum);
        }
    }
    printf("%d",mx);
    return 0;
}
/*
5 4 2
2 2 3 5
3 2 4 0
5 3 1 2
0 2 0 1
3 2 1 5
*/