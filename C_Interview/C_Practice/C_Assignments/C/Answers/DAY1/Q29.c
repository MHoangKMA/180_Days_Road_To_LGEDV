#include <stdio.h>
#include <math.h>

int countInteger(double a, double b)
{
    if (a > b)
    {
        double temp = a;
        a = b;
        b = temp;
    }

    long long left = (long long)a;
    if(a > 0 && left < a) left += 1;
    if(a < 0 && left < a) left += 1;  

    long long right = (long long)b;
    if(b > 0 && right > b) right -= 1; 
    if(b < 0 && right < b) right += 1;   

    long long count = right - left + 1;

    if (count < 0)
    {
        return 0;
    }
    else
    {
        return count;
    }
}

int main()
{

    double a, b;
    long long numberInteger = 0;
    scanf("%lf %lf", &a, &b);

    numberInteger = countInteger(a, b);
    printf("%lld", numberInteger);
    return 0;
}