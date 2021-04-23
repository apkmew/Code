#include <bits/stdc++.h>
using namespace std;
int mark[5000];
int main(){
    int n,y,i;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&y);
        mark[y]++;
    }
    for(i=0;i<=2017;i++){
        if(mark[2017-i]==1){
            printf("%d",2017-i);
            return 0;
        }
        else if(mark[2017+i]==1){
            printf("%d",2017+i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
