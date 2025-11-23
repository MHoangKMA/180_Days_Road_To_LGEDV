#include <stdio.h>
#include <math.h>
#define RANG_MAX 1000000LL
#define RANG_MIN -1000000LL


int main()
{
    long long x1,y1,x2,y2;
    
    scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);

    if(
        (x1 >= RANG_MIN && x1 <= RANG_MAX) && (x2 >= RANG_MIN && x2 <= RANG_MAX) &&
        (y1 >= RANG_MIN && y1 <= RANG_MAX) && (y2 >= RANG_MIN && y2 <= RANG_MAX)
    )
    {
        long long dx = x2 - x1;
        long long dy = y2 - y1;   
        printf("%.2lf", sqrt((double)(dx*dx+dy*dy)));
    }
    return 0;

}