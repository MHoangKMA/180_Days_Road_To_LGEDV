#include <stdio.h>

#define RANG_MIN 0
#define RANG_MAX (1 * 1e5)

int main()
{
    long long x;
    
     scanf("%lld", &x);

    if((x >= RANG_MIN && x <= RANG_MAX))
    {
        printf("%lld", x*x*x + 3*x*x + x + 1);
    }
    return 0;

}