#include <stdio.h>
#define RANGMIN 0
#define RANGMAX 1000000

long long years, months,days, remaining_days;

void convertDay(long long number)
{
    years = number / 365;
    remaining_days = number % 365;

    months =  remaining_days / 30;
    days =  remaining_days % 30;
}

int main()
{

    long long number;
    scanf("%lld", &number);

    if(number < RANGMIN || number > RANGMAX)
    {
        return 1;
    }

    convertDay(number);
    printf("%lld year, %lld month, %lld day\n", years, months, days);
    return 0;

}