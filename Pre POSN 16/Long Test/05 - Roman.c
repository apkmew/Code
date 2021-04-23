/*
 TASK: Roman
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int main(){
    int d,i=0,v=0,x=0,l=0,c=0,j,k;
    scanf("%d",&d);
    for(j=1;j<=d;j++){
        k=j;
        while(k>0){
            if(k>=100) k-=100,c++;
            else if(k>=90) k-=90,x++,c++;
            else if(k>=50) k-=50,l++;
            else if(k>=40) k-=40,x++,l++;
            else if(k>=10) k-=10,x++;
            else if(k>=9) k-=9,x++,i++;
            else if(k>=5) k-=5,v++;
            else if(k>=4) k-=4,i++,v++;
            else if(k>=1) k-=1,i++;
        }
    }

    printf("%d %d %d %d %d\n",i,v,x,l,c);
	return 0;
}
