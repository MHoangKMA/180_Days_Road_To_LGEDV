#include <stdio.h>
#include <math.h>

#define RANGMIN 0
#define RANGMAX 1000000



void solveQuadratic(double a, double b, double c, int *n, double x[2])
{
    if(a == 0)
    {
        if(b == 0)
        {
            if(c == 0)
            {
                *n = 1;
            }
            else
            {
                *n = 0;
            }
        }
        else
        {
            *n = 1;
            x[0] = -c / b;
        }
    }
    else
    {
        double denlta = b*b - (4 * a * c);
        if(denlta < 0)
        {
            *n = 0;
        }
        else if (denlta == 0)
        {
            *n = 1;
            x[0] = -b / 2*a;
        }
        else
        {
            double sqrtDealta = sqrt(denlta);
            double x1 = (-b + sqrtDealta) / (2 *a);
            double x2 = (-b - sqrtDealta) / (2 *a);

            *n = 2;
            x[0] =  x1;
            x[1] = x2;
        }
    }
}

int main()
{

    double a,b,c;
    int n;
    double x[2];
    scanf("%lf %lf %lf", &a, &b, &c);
    solveQuadratic(a,b,c, &n, x);
    if(n == -1)
        printf("INF\n");
    else if(n == 0)
        printf("NO\n");
    else if(n == 1)
        printf("%.2lf\n", x[0]);
    else
        printf("%.2lf %.2lf\n", x[0], x[1]);
    return 0;

}