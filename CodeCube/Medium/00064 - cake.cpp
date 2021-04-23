#include <bits/stdc++.h>
using namespace std;
int a[30][5];
int main(){
    int n,i,x=1,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d/%d",&a[i][0],&a[i][1]);
        x = x*a[i][1]/__gcd(x,a[i][1]);
    }
    for(i=0;i<n;i++){
        a[i][0] *= x/a[i][1];
        sum += a[i][0];
    }
    if(sum%x==0){
        printf("%d\n",sum/x);
        printf("0\n");
    }
    else{
        printf("%d\n",sum/x+1);
        printf("%d/%d\n",(sum/x+1)*x-sum,x);
    }
    return 0;
}
