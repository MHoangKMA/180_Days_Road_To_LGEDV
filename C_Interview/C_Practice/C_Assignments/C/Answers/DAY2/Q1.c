#include <stdio.h>
#include <math.h>

#define RANGEMIN 0
#define RANGEMAX 10000LL

long long calculatorRectangular(long long s1, long long s2, long long s3)
{
    double a = sqrt(((double)s1 * s3) / s2);
    double b = sqrt(((double)s1 * s2) / s3);
    double c = sqrt(((double)s2 * s3) / s1);

    long long P = 4.0 * (a + b + c);
    return P;
}

int main()
{
    long long s1, s2, s3, P;
    scanf("%lld %lld %lld", &s1, &s2, &s3);
    P = calculatorRectangular(s1, s2, s3);
    printf("%lld", P);

    return 0;
}