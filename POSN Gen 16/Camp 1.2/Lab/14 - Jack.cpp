/*
    TASK:
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int node[100100],l[100100],r[100100];
int main()
{
    int n,i,run;
    scanf("%d %d",&n,&node[1]);
    printf("*\n");
    for(i=2;i<=n;i++){
        scanf("%d",&node[i]);
        run = 1;
        while(1){
            if(node[i] < node[run]){
                printf("L");
                if(l[run]==0){
                    l[run] = i;
                    break;
                }
                run = l[run];
            }
            else if(node[i] > node[run]){
                printf("R");
                if(r[run]==0){
                    r[run] = i;
                    break;
                }
                run = r[run];
            }
        }
        printf("*\n");
    }
    return 0;
}
/*
7
1
2
5
4
3
-2
-1
*/
