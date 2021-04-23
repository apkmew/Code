/*
 TASK: Wheel
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int score[110],wheel[110],person[25];
int main(){
    int i,j,n,k,l,now=0,nowdice;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&score[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&nowdice);
        for(j=0;j<nowdice;j++){
            if(wheel[now%n]==1) nowdice++;
            now++;
        }
        while(wheel[now%n]==1)  now++;
        person[i%k] += score[now%n];
        wheel[now%n]=1;
    }
    for(i=0;i<k;i++)
        printf("%d\n",person[i]);
	return 0;
}
/*
5 3
3
5
2
4
1
3
5
1
2
1
*/
