#include <stdio.h>

#define RANG_MIN 0
#define RANG_MAX (1 * 1e5)

int main()
{
    unsigned long long n;
    
    scanf("%llu", &n);

    if((n >= RANG_MIN && n <= RANG_MAX))
    {
        printf("%llu", (n * (n+1) * (2*n+1)) / 6);
    }
    return 0;
}