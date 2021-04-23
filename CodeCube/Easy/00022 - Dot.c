#include<stdio.h>
int x[1010];
int y[1010];
int main(){
    int i,j,n,tub = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&x[i],&y[i]);
        for(j=0;j<i;j++)
            if(x[i] == x[j] && i != j)
                if(y[i] == y[j])
                    tub++;
    }
    printf("%d",n-tub);
    return 0;
}
/*
7
1 5
2 4
10 12
7 18
4 2
1 5
105 108
*/
