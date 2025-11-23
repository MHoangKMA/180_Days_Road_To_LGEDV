#include <stdio.h>
#define RANG_MAX 100000000LL
#define RANG_MIN 1


int main()
{
    long long a,b;
    
    scanf("%lld %lld",&a,&b);

    if((a >= RANG_MIN && a <= RANG_MAX) && (b >= RANG_MIN && b <= RANG_MAX) && (a >= b))
    {
        printf("%lld", (a/b)*b);
    }
    return 0;

}