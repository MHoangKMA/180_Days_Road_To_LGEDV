#include <stdio.h>

#define RANG_MIN 0
#define RANG_MAX 10000000000000000L

int main()
{
    unsigned long long n;

    scanf("%llu", &n);

    if ((n >= RANG_MIN && n <= RANG_MAX))
    {
        if (n % 2 == 0)
        {
            printf("%llu", n / 2);
        }
        else
        {
            printf("%llu", -(n + 1) / 2);
        }
    }
    return 0;
}