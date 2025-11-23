#include <stdio.h>
#define RANG_MAX 1000000LL
#define RANG_MIN 1
#define PI 3.14

int main()
{
    long long r;
    
    scanf("%lld",&r);

    if((r >= RANG_MIN && r <= RANG_MAX))
    {
        printf("%.2lf %.2lf", (double)(2*PI*r), (double)(PI*r*r));
    }
    return 0;

}