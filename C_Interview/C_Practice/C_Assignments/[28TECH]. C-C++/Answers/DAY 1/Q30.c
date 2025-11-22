#include <stdio.h>
#include <math.h>
#define RANGEMIN 0
#define RANGEMAX 10

int isSOL(long long a, long long b, long long c)
{
    if((a/ b  == c) || (b / c == a) || (c / a ==b))
    {
        return 1;
    }
    return 0;
}

int main()
{

    long long a,b,c,result;
    if(isSOL(a,b,c))
    {
        printf("/\n");
    }
    else
    {
        printf("NOSOL\n");
    }
    
    return 0;
}