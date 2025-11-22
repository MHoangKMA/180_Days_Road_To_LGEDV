#include <stdio.h>

#define RANG_MIN -1000000000LL
#define RANG_MAX 1000000000LL

int main()
{
    long long a, b;
    
    scanf("%lld %lld",&a,&b );

    if((a >= RANG_MIN && a <= RANG_MAX) && (b >= RANG_MIN && b <= RANG_MAX))
    {
        printf("%lld %lld %lld %.2lf", a+b,a-b,a*b, (double)a/b);
    }
    return 0;

}