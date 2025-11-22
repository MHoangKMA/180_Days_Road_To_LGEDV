
#include <stdio.h>

int isTriangle(long long a, long long b, long long c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return 0;
    }

    if (a + b > c && a + c > b && b + c > a)
    {
        return 1;
    }

    return 0;
}

int isEquilateral(long long a, long long b, long long c)
{
    if (isTriangle(a, b, c) == 0)
    {
        return 0;
    }

    if (a == b && b == c)
    {
        return 1;
    }

    return 0;
}

int isIsosceles(long long a, long long b, long long c)
{
    if (isTriangle(a, b, c) == 0)
    {
        return 0;
    }

    if (a == b || b == c || a == c)
    {
        return 1;
    }

    return 0;
}

int isRight(long long a, long long b, long long c)
{
    if (isTriangle(a, b, c) == 0)
    {
        return 0;
    }

    if (a * a + b * b == c * c ||
        a * a + c * c == b * b ||
        b * b + c * c == a * a)
        return 1;
    return 0;
}

int isNormal(long long a, long long b, long long c)
{
    if (isTriangle(a, b, c) == 0)
    {
        return 0;
    }

    if (!isEquilateral(a, b, c) && !isIsosceles(a, b, c) && !isRight(a, b, c))
    {
        return 1;
    }

    return 0;
}

int main()
{

    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if (!isTriangle(a, b, c))
    {
        printf("INVALID\n");
        return 0;
    }

    if (isEquilateral(a, b, c))
        printf("1\n");
    else if (isRight(a, b, c))
        printf("3\n");
    else if (isIsosceles(a, b, c))
        printf("2\n");
    else
        printf("4\n");

    return 0;
}