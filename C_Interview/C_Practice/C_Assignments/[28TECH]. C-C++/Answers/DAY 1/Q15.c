#include <stdio.h>

#define RANG_MAX 100000000000000000000000LL
#define RANG_MIN -100000000000000000000000LL

int main()
{
    long long n;

    scanf("%lld", &n);

    if ((n >= RANG_MIN && n <= RANG_MAX))
    {
        if ((n % 3) == 0 && (n % 5) == 0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    return 0;
}