#include<bits/stdc++.h>

using namespace std;
int a[1000000];
int c[1000000];
int main(){
	int i,n,b=0,x=0;
	scanf("%d",&n);
	for(i=1;i<=int(sqrt(n));i++){
        for(int j=n;j>=int(sqrt(n));j--){
            if(n%i==0 && i*j==n){
                a[b]=i;
                c[x]=j;
                b++;
                x++;
            }
        }
    }
    sort(a,a+i);
    sort(c,c+i);
    for(i=0;i<=sqrt(n);i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<=sqrt(n);i++){
        printf("%d ",c[i]);
    }
	return 0;
}
//2000000000
