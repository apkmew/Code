#include <stdio.h>
int main(){
    int year,month,start=1,i,day;
    printf("Enter year: "); scanf("%d",&year);
    printf("Enter month: "); scanf("%d",&month);
    printf("====================\n");
    switch(month){
        case 1 : printf("January %d",year), day = 31; break;
        case 2 : printf("February %d",year), day = 28; break;
        case 3 : printf("March %d",year),   day = 31; break;
        case 4 : printf("April %d",year),   day = 30; break;
        case 5 : printf("May %d",year),     day = 31; break;
        case 6 : printf("June %d",year),    day = 30; break;
        case 7 : printf("July %d",year),    day = 31; break;
        case 8 : printf("August %d",year),  day = 31; break;
        case 9 : printf("September %d",year),   day = 30; break;
        case 10 : printf("October %d",year),    day = 31; break;
        case 11 : printf("November %d",year),   day = 30; break;
        case 12 : printf("December %d",year),   day = 31; 
    }
    printf("\nSun Mon Tue Wed Thu Fri Sat\n");
    for(i=1990;i<year;i++){
        if(i%4==0 && i%100!=0 || i%400==0) start += 366;
        else start += 365;
    }
    switch(month){
        case 12 : start += 30;
        case 11 : start += 31;
        case 10 : start += 30;
        case 9 : start += 31;
        case 8 : start += 31;
        case 7 : start += 30;
        case 6 : start += 31;
        case 5 : start += 30;
        case 4 : start += 31;
        case 3 : start += 28;
        case 2 : start += 31;
    }
    if(month>2 && (year%4==0 && year%100!=0 || year%400==0)) start += 1;
    if(month==2 && (year%4==0 && year%100!=0 || year%400==0)) day += 1;
    start %= 7;
    for(i=0;i<4*start;i++) printf(" ");
    i = 1;
    while(i <= day){
        if(i<10) printf("  %d ",i);
        else printf(" %d ",i);
        i++; start++;
        if(start == 7){
            start = 0;
            printf("\n");
        }
    }
    return 0;
}