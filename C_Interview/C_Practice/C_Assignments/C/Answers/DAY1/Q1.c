#include <stdio.h>

#define RANG_MIN (-1 * 1e18)
#define RANG_MAX (1 * 1e18)

int main()
{
    long long a, b;
    
    scanf("%lld %lld",&a,&b );

    if((a >= RANG_MIN && a <= RANG_MAX) && (b >= RANG_MIN && b <= RANG_MAX))
    {
        printf("%lld %lld", a/b, a%b);
    }
    return 0;

}