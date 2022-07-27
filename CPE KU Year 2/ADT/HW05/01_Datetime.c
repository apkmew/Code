#include <stdio.h>

typedef struct datetime {
    int date;       // 1-31
    int month;      // 1-12
    int year;       // 1970++
    int dayOfWeek;  // 0-6 
    int hour;       // 0-23
    int minute;     // 0-59
    int second;     // 0-59
} datetime_t;

datetime_t createDate(int timestamp){
    datetime_t a;
    int m[] = {0,31,28,31,30,31,30,31,31,30,31,30,31},i;
    a.second = timestamp % 60;  timestamp /= 60;
    a.minute = timestamp % 60;  timestamp /= 60;
    a.hour = timestamp % 24;    timestamp /= 24;
    a.dayOfWeek = (timestamp + 4) % 7;
    timestamp++;
    for(i=1970;timestamp>365;i++){
        //printf("%d\n",timestamp);
        if(i%4==0 && i%100!=0 || i%400==0) timestamp -= 366;
        else timestamp -= 365;
    }
    //printf("%d",timestamp);
    if(i%4==0 && i%100!=0 || i%400==0) m[1]++;
    a.year = i;
    i = 1;
    while(timestamp > m[i]){
        timestamp -= m[i];
        i++;
    }
    a.month = i;
    a.date = timestamp;
    return a;
}

void printDate(datetime_t inputDate){
    char d[10][5] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
    char m[15][5] = {"","JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    printf("%s %d %s %d %02d:%02d:%02d",d[inputDate.dayOfWeek],inputDate.date,m[inputDate.month],inputDate.year,inputDate.hour,inputDate.minute,inputDate.second);
}

int main(void){
    datetime_t inputDate;
    int timestamp;

    scanf("%d",&timestamp);
    inputDate = createDate(timestamp);
    printDate(inputDate);
}
/*
1528374628
1597436869
382763892
50
*/