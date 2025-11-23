#include <stdio.h>

#define RANG_MAX 1000000L
#define RANG_MIN -1000000L

int isLeapYear(long long year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int main()
{
    long long month, year;

    scanf("%lld %lld", &month, &year);
    if (year <= 0 || month < 1 || month > 12)
    {
        printf("INVALID");
        return 0;
    }

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 11:
        printf("31");
        break;
    case 4:
    case 6:
    case 9:
    case 12:
        printf("30");
        break;
    case 2:
        if (isLeapYear(year))
        {
            printf("29");
        }
        else
        {
            printf("28");
        }

        return 0;
    }
}