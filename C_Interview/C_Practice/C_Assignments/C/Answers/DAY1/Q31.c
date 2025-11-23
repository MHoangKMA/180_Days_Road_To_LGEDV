#include <stdio.h>
#include <math.h>
#define RANGEMIN 0
#define RANGEMAX 10

double caculatorAvg(double a, double b, double c, double d)
{
    double result = (a + b + (c * 2) + (d * 3)) / 7;
    return result;
}

int main()
{

    double a, b, c, d, resultAvg;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    if ((a < RANGEMIN || a > RANGEMAX) ||
        (b < RANGEMIN || b > RANGEMAX) ||
        (c < RANGEMIN || c > RANGEMAX) ||
        (d < RANGEMIN || d > RANGEMAX))
    {
        return 1;
    }
    resultAvg = caculatorAvg(a, b, c, d);
    if (resultAvg >= 8)
    {
        printf("GIOI\n");
    }
    else if (resultAvg < 8 && resultAvg >= 6.5)
    {
        printf("KHA\n");
    }
    else if (resultAvg < 6.5 && resultAvg >= 5)
    {
        printf("TRUNG BINH\n");
    }
    else
    {
        printf("YEU\n");
    }

    return 0;
}