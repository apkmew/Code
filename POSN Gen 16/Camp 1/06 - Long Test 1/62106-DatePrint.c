#include <stdio.h>
int main(){
    int n,d,m,y,k;
    scanf("%d",&n);
    while(n--){
        scanf("%d/%d/%d %d",&d,&m,&y,&k);
        if(d<1 || d>31 || m<1 || m>12 || y<1000 || y>3000 || k<2 || k>4)
            printf("No");
        else if(k==2){
            switch(m){
                case 1 : printf("%02d January, %d\n",d,y); break;
                case 2 : printf("%02d February, %d\n",d,y); break;
                case 3 : printf("%02d March, %d\n",d,y); break;
                case 4 : printf("%02d April, %d\n",d,y); break;
                case 5 : printf("%02d May, %d\n",d,y); break;
                case 6 : printf("%02d June, %d\n",d,y); break;
                case 7 : printf("%02d July, %d\n",d,y); break;
                case 8 : printf("%02d August, %d\n",d,y); break;
                case 9 : printf("%02d September, %d\n",d,y); break;
                case 10 : printf("%02d October, %d\n",d,y); break;
                case 11 : printf("%02d November, %d\n",d,y); break;
                case 12 : printf("%02d December, %d\n",d,y); break;
            }
        }
        else if(k==3){
            switch(m){
                case 1 : printf("January %02d, %d\n",d,y); break;
                case 2 : printf("February %02d, %d\n",d,y); break;
                case 3 : printf("March %02d, %d\n",d,y); break;
                case 4 : printf("April %02d, %d\n",d,y); break;
                case 5 : printf("May %02d, %d\n",d,y); break;
                case 6 : printf("June %02d, %d\n",d,y); break;
                case 7 : printf("July %02d, %d\n",d,y); break;
                case 8 : printf("August %02d, %d\n",d,y); break;
                case 9 : printf("September %02d, %d\n",d,y); break;
                case 10 : printf("October %02d, %d\n",d,y); break;
                case 11 : printf("November %02d, %d\n",d,y); break;
                case 12 : printf("December %02d, %d\n",d,y); break;
            }
        }
        else if(k==4){
            switch(m){
                case 1 : printf("%02d January, %02d\n",d,y%100); break;
                case 2 : printf("%02d February, %02d\n",d,y%100); break;
                case 3 : printf("%02d March, %02d\n",d,y%100); break;
                case 4 : printf("%02d April, %02d\n",d,y%100); break;
                case 5 : printf("%02d May, %02d\n",d,y%100); break;
                case 6 : printf("%02d June, %02d\n",d,y%100); break;
                case 7 : printf("%02d July, %02d\n",d,y%100); break;
                case 8 : printf("%02d August, %02d\n",d,y%100); break;
                case 9 : printf("%02d September, %02d\n",d,y%100); break;
                case 10 : printf("%02d October, %02d\n",d,y%100); break;
                case 11 : printf("%02d November, %02d\n",d,y%100); break;
                case 12 : printf("%02d December, %02d\n",d,y%100); break;
            }
        }
    }
    return 0;
}
/*
3
12/01/2007 2
01/04/1998 3
05/07/1999 4
*/
