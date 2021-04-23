/*
 TASK: Ice Bucket Challenge
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int main(){
    int n,k,g,a,i,ans=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&g,&k);
        if(g<=100){
            printf("0\n");
            continue;
        }
        else{
            a = k-1;
            for(i=1;i>0;i++){
                if(g-100<=0)    break;
                else{
                    g = g - a*100 - 10;
                    ans++;
                }
            }
        }
        printf("%d",ans);
        ans = 0;
    }

	return 0;
}
