#include <stdio.h>

long long findSecondMaxvalue(long long *a, long long *b, long long *c, long long *d, long long *e)
{
    long long min1 = *a;
    long long min2 = *b;
    long long x = *c;

    if (min1 > min2)
    {
        long long temp = min1;
        min1 = min2;
        min2 = min1;
    }

    if (x < min1)
    {
        min1 = x;
        min2 = min1;
    }
    else if (x < min2)
    {
        min2 = x;
    }

    x = *d;
    if (x < min1)
    {
        min1 = x;
        min2 = min1;
    }
    else if (x < min2)
    {
        min2 = x;
    }

    x = *e;
    if (x < min1)
    {
        min1 = x;
        min2 = min1;
    }
    else if (x < min2)
    {
        min2 = x;
    }

    return min2;
}

int main()
{

    long long a, b, c, d, e, min2;
    scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &e);
    min2 = findSecondMaxvalue(&a, &b, &c, &d, &e);
    printf("%lld", min2);

    return 0;
}