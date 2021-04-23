/*
 TASK: Array Practice
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int a[1010];
int main(){
    int n,k,i,ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
        if(a[i]==k) ans++;
    }
    printf("\n");
    printf("%d",ans);

	return 0;
}
