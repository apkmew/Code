/*
 TASK: Date
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int main(){
    int n,d,m,y,k;
    scanf("%d",&n);
    while(n--){
        scanf("%d/%d/%d %d",&d,&m,&y,&k);
        if(d<1 || d>31 || m<1 || m>12 || y<1000 || y>3000)
            printf("No");
        else if(k==1){
            printf("%02d/%02d/%04d",d,m,y);
        }
        else if(k==2){
            if(m==1)    printf("%02d January, %04d",d,y);
            if(m==2)    printf("%02d February, %04d",d,y);
            if(m==3)    printf("%02d March, %04d",d,y);
            if(m==4)    printf("%02d April, %04d",d,y);
            if(m==5)    printf("%02d May, %04d",d,y);
            if(m==6)    printf("%02d June, %04d",d,y);
            if(m==7)    printf("%02d July, %04d",d,y);
            if(m==8)    printf("%02d August, %04d",d,y);
            if(m==9)    printf("%02d September, %04d",d,y);
            if(m==10)    printf("%02d October, %04d",d,y);
            if(m==11)    printf("%02d November, %04d",d,y);
            if(m==12)    printf("%02d December, %04d",d,y);
        }
        else if(k==3){
            if(m==1)    printf("January %02d, %04d",d,y);
            if(m==2)    printf("February %02d, %04d",d,y);
            if(m==3)    printf("March %02d, %04d",d,y);
            if(m==4)    printf("April %02d, %04d",d,y);
            if(m==5)    printf("May %02d, %04d",d,y);
            if(m==6)    printf("June %02d, %04d",d,y);
            if(m==7)    printf("July %02d, %04d",d,y);
            if(m==8)    printf("August %02d, %04d",d,y);
            if(m==9)    printf("September %02d, %04d",d,y);
            if(m==10)    printf("October %02d, %04d",d,y);
            if(m==11)    printf("November %02d, %04d",d,y);
            if(m==12)    printf("December %02d, %04d",d,y);
        }
        else if(k==4){
            if(m==1)    printf("%02d January, %02d",d,y%100);
            if(m==2)    printf("%02d February, %02d",d,y%100);
            if(m==3)    printf("%02d March, %02d",d,y%100);
            if(m==4)    printf("%02d April, %02d",d,y%100);
            if(m==5)    printf("%02d May, %02d",d,y%100);
            if(m==6)    printf("%02d June, %02d",d,y%100);
            if(m==7)    printf("%02d July, %02d",d,y%100);
            if(m==8)    printf("%02d August, %02d",d,y%100);
            if(m==9)    printf("%02d September, %02d",d,y%100);
            if(m==10)    printf("%02d October, %02d",d,y%100);
            if(m==11)    printf("%02d November, %02d",d,y%100);
            if(m==12)    printf("%02d December %02d",d,y%100);
        }
        else
            printf("No");
    }

	return 0;
}
