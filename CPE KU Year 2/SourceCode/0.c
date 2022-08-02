#include <stdio.h>

typedef struct datetime
{
    int date;
    int month;
    int year;
    int dayOfWeek;
    int hour;
    int minute;
    int second;
} datetime_t;

datetime_t createDate(int timestamp)
{
    datetime_t d;
    int day;
    int monthday[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (timestamp / 86400 > 0)
    {
        day = timestamp / 86400;
        timestamp = timestamp % 86400;
    }
    else
        day = 0;
    if (timestamp / 3600 > 0)
    {
        d.hour = timestamp / 3600;
        timestamp = timestamp % 3600;
    }
    else
        d.hour = 0;
    if (timestamp / 60 > 0)
    {
        d.minute = timestamp / 60;
        timestamp = timestamp % 60;
    }
    else
        d.minute = 0;
    d.second = timestamp;
    d.dayOfWeek = (day + 4) % 7;
    d.year = 1970;
    while (day >= 365)
    {
        if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
        {
            if(day == 365) break;
            day -= 366;
            d.year++;
        }
        else
        {
            day -= 365;
            d.year++;
        }
    }
    if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
        monthday[1] = 29;
    if (day == 0)
    {
        d.date = 1;
        d.month = 0;
        return d;
    }
    d.date = 1;
    for (int i = 0; i < 13; i++)
    {
        if (day+1 <= monthday[i])
        {
            d.date += day;
            d.month = i;
            break;
        }
        day -= monthday[i];
    }
    return d;
}

void printDate(datetime_t inputDate)
{
    char day[8][5] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    char month[15][5] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    printf("%s %d %s %d %02d:%02d:%02d", day[inputDate.dayOfWeek], inputDate.date, month[inputDate.month], inputDate.year, inputDate.hour, inputDate.minute, inputDate.second);
}

int main(void)
{
    datetime_t inputDate;
    int timestamp;
    scanf("%d", &timestamp);
    inputDate = createDate(timestamp);
    printDate(inputDate);
    return 0;
}

// 382763892