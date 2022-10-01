#include <stdio.h>
int a[100100];
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=1;i<n;i++){
        int j=i-1;
        int temp=a[i];
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        for(int k=0;k<n;k++) printf("%d ",a[k]);
        printf("\n");
    }
    return 0;
}
/*
8
4 3 2 10 12 1 5 6
9
54 26 93 17 77 31 44 55 20
16
9 15 8 1 4 11 7 12 13 6 5 3 16 2 10 14
*/