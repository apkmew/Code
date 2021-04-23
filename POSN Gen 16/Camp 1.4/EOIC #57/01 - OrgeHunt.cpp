/*
    TASK: Orge Hunt
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[100];
int main()
{
    int t,i,cou=0,j,k;
    scanf("%d",&t);
    for(i=1;i>0;i++){
        cou += pow(2,i);
        if(t<=cou) break;
    }
    //printf("%d\n",i);
    t -= cou-pow(2,i);
    for(j=i;j>=1;j--){
        k = pow(2,j);
        if((t-1)%k<k/2) printf("4");
        else printf("7");
    }
    return 0;
}
