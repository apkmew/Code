/*
 TASK: Exercise 3
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a<b) printf("%d is less than %d",a,b);
    if(a>b) printf("%d is more than %d",a,b);
    if(a==b) printf("%d is equal to %d",a,b);

	return 0;
}
