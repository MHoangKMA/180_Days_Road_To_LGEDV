#include <stdio.h>

#define RANG_MIN 0
#define RANG_MAX 1e9

int main()
{
    long long a, b, c;

    scanf("%lld %lld %lld", &a, &b, &c);

    if (
        (a >= RANG_MIN && a <= RANG_MAX) &&
        (b >= RANG_MIN && b <= RANG_MAX) &&
        (c >= RANG_MIN && c <= RANG_MAX))
    {
        printf("%lld", (a * (b + c) + b * (a + c)));
    }
    return 0;
}