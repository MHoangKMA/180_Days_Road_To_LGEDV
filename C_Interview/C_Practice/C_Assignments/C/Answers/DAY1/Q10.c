#include <stdio.h>

#define RANG_MIN 0
#define RANG_MAX 1000000000LL

int main()
{
    unsigned long long n;
    
    scanf("%llu", &n);

    if((n >= RANG_MIN && n <= RANG_MAX))
    {
        printf("%llu", 1 - (1/n+1));
    }
    return 0;
}