#include <stdio.h>

#define RANG_MAX 1000000L
#define RANG_MIN -1000000L

int iSLeapYear(long long year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{
    long long year;

    scanf("%lld", &year);
    if (year < 0 || year == 0)
    {
        printf("INVALID");
        return 0;
    }

    if (iSLeapYear(year))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}