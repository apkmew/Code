/*
    TASK: Holynum
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
char a[15],b[15];
int main()
{
    int a,k;
    scanf("%d %d",&a,&k);
    sprintf(b,"%.0lf\n",a/pow(10,k));
    printf("%.0lf\n",atoi(b)*pow(10,k));
    return 0;
}
