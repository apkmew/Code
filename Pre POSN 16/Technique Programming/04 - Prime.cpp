/*
 TASK: Prime
 LANG: C++
 AUTHOR: Mew
*/

#include <bits/stdc++.h>
using namespace std;
int a[10000000];
int main(){
    int i,j,n,m;
    scanf("%d",&n);
    if(n==1){
        printf("2");    return 0;
    }
    for(i=3;i<10000000;i++)
        a[i]=1;
    m = sqrt(10000000);
    for(i=3;i<m;i+=2){
        if(a[i]){
            for(j=i*i;j<10000000;j+=i)
                a[j]=0;
        }
    }
    for(i=3,j=1; 1 ;i+=2){
        if(a[i]){
            j++;
            if(n==j){
                printf("%d",i); return 0;
            }
        }
    }

	return 0;
}
