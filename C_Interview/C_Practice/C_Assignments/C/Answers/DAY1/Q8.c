#include <stdio.h>

#define RANG_MIN 0
#define RANG_MAX 100000000LL

int main()
{
    unsigned long long n;
    
    scanf("%llu", &n);

    if((n >= RANG_MIN && n <= RANG_MAX))
    {
        printf("%llu", (n * (n+1)) / 2);
    }
    return 0;
}