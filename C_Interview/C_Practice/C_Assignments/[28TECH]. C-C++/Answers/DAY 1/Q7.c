#include <stdio.h>
#define RANG_MAX (1 * 1e6)

int main()
{
    long long C;
    
    scanf("%lld",&C);

    if((C <= RANG_MAX))
    {
        printf("%.2lf",(double)(((C*9)/5)+32));
    }
    return 0;
}