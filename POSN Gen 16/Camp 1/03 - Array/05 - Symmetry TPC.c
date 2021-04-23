/*
 TASK: Symmetry TPC
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int a[1100];
int main(){
    int n,q,i,j,ch=0,mx=-10,ans;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]==0) ch++;
            else if(a[i]==1){
                if(ch%2==1 && ch>mx){
                    mx=ch;
                    ans=i-((ch+1)/2);
                }
                ch=0;

            }
        }
        if(ch%2==1 && ch>mx){
                    mx=ch;
                    ans=i-((ch+1)/2);
                }
                ch=0;
        if(mx==-10) printf("-1\n");
        else printf("%d\n",ans);
        mx=-10;
    }

	return 0;
}
/*
4
12
1 0 0 0 1 0 0 0 0 0 1 1
12
0 0 0 1 0 0 0 1 0 0 0 0
12
1 1 1 0 1 1 1 0 1 1 1 1
12
0 0 1 1 0 0 1 1 0 0 0 0
*/
