
#include <stdio.h>

void checkTriangle(long long a, long long b, long long c)
{
    if(a <= 0 || b <= 0 || c <= 0)
    {
        printf("INVALID\n");
        return;
    }

    if(a + b > c && a + c > b && b + c > a)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}


int main()
{

    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    checkTriangle(a, b, c);

    return 0;
}