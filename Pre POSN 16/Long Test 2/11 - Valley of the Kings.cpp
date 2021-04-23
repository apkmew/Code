/*
 TASK: Valley of the Kings
 LANG: C++
 AUTHOR: Mew
*/

#include <bits/stdc++.h>
using namespace std;
int a[2000];
int main(){
    int q,n,i,score=0,ch=1;
    scanf("%d",&q);
    while(q--){
        score = 0;
        ch=1;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for(i=0;i<n;i++){
            if(a[i]==a[i+1]){
                score++;
                a[i]=0;
                a[i+1]=0;
                i++;
            }
        }
        printf("%d\n",score);
        for(i=0;i<n;i++){
            if(a[i]!=0){
                printf("%d ",a[i]);
                ch=0;
            }
        }
        if(ch)  printf("Empty");
        printf("\n");
    }
	return 0;
}
/*
2
15
3 5 3 2 3 6 3 4 7 2 4 3 5 3 4
4
1 8 8 1
*/
