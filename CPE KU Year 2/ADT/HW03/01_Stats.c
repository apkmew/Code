#include <stdio.h>
#include <stdlib.h>

void findStats(int a[],int *n,double *avg,int *maxi,int *mini){
    int i;
    *maxi = -200, *mini = 200, *avg = 0;
    for(i=0;i<*n;i++){
        *avg += a[i];
        if(a[i] > *maxi) *maxi = a[i];
        if(a[i] < *mini) *mini = a[i];
    }
    *avg /= *n;
}

int main(void){
    int n, i, maxi ,mini;
    double avg;
    int *nums;

    scanf("%d", &n);
    nums = (int *)malloc(sizeof (int) * n);
    for(i=0; i<n; i++)
        scanf("%d", nums+i);
    findStats(nums, &n, &avg, &maxi, &mini);
    printf("%.2f %d %d", avg, maxi, mini);
    return 0;
}